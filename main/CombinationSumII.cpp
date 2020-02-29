class Solution {
public:
    
    vector<vector<int>> res;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> c_res;
        sort(candidates.begin(), candidates.end());
        backtrack(c_res, candidates, target, 0);
        return res;
        
    }
    
    void backtrack(vector<int>& current_res, vector<int>& candidates, int target, int index) {
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] == target) {
                current_res.push_back(candidates[i]);
                res.push_back(current_res);
            }
            else if (candidates[i] > target) {
                continue;
            }
            else {
                current_res.push_back(candidates[i]);
                backtrack(current_res, candidates, target - candidates[i], i + 1);
            }
            current_res.pop_back();
            while (i < candidates.size() - 1 && candidates[i+1] == candidates[i]) {
                i++;
            }
            
        }
        
    }
};
