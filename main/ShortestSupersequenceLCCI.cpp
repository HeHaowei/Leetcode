/**
 * Leetcode: https://leetcode-cn.com/problems/shortest-supersequence-lcci/
 *
 */


class Solution {
public:
    vector<int> shortestSeq(vector<int>& big, vector<int>& small) {
        
        unordered_map<int, int> small_map;
        for (vector<int>::iterator it = small.begin(); it != small.end(); it++) {
            small_map[*it] = -1;
        }

        int count = small.size();

        queue<pair<int, int>>num;

        int minLen = 0;
        int minLeft = -1;
        int minRight = -1;

        for (int i = 0; i < big.size(); i++) {
            if (small_map.find(big[i]) != small_map.end()) {
                if (small_map[big[i]] == -1) {
                    count--;
                    small_map[big[i]] =  i;
                    num.push(make_pair(i, big[i]));
                } else {
                    small_map[big[i]] = i;
                    pair<int, int> queue_left = num.front();
                    if (queue_left.second == big[i]) {
                        num.pop();
                    } 
                    num.push(make_pair(i, big[i]));                    
                }

                if (count <= 0) {
                    pair<int, int> queue_left = num.front();
                    while (small_map[queue_left.second] > queue_left.first) {
                        num.pop();
                        queue_left = num.front();
                    } 
                    int current_len = i - queue_left.first + 1;
                    if (current_len < minLen || minLen == 0) {
                        minLen = current_len;
                        minLeft = queue_left.first;
                        minRight = i;
                    }

                }
            }
        }

        vector<int> result;
        if (minLen > 0) {
            result.push_back(minLeft);
            result.push_back(minRight);
        }
        return result;
    }
};
