/**
 * Leetcode url: https://leetcode-cn.com/problems/length-of-last-word/
 */


class Solution {
public:
    int lengthOfLastWord(string s) {

        int size = s.length();
        int i = size - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        for (int j = i; j >= 0; j--) {
            if (s[j] == ' ') return (i - j);
        }

        return i + 1;
        
    }
};
