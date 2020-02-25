class Solution {
public:
    
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<int> cur;
        //sort(candidates.begin(), candidates.end());
        backtrack(candidates, cur, target, 0);
        return res;
    }
    
    void backtrack(vector<int>& candidates, vector<int>& current_res, int target, int index) {
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] == target) {
                current_res.push_back(candidates[i]);
                res.push_back(current_res);
            }
            else if (candidates[i] > target) continue;
            else {
                current_res.push_back(candidates[i]);
                backtrack(candidates, current_res, target - candidates[i], i);
            }
            current_res.pop_back();
        }
    }
    
    
};class Solution {
public:
    
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<int> cur;
        //sort(candidates.begin(), candidates.end());
        backtrack(candidates, cur, target, 0);
        return res;
    }
    
    void backtrack(vector<int>& candidates, vector<int>& current_res, int target, int index) {
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] == target) {
                current_res.push_back(candidates[i]);
                res.push_back(current_res);
            }
            else if (candidates[i] > target) continue;
            else {
                current_res.push_back(candidates[i]);
                backtrack(candidates, current_res, target - candidates[i], i);
            }
            current_res.pop_back();
        }
    }
    
    
};class Solution {
public:
    
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<int> cur;
        //sort(candidates.begin(), candidates.end());
        backtrack(candidates, cur, target, 0);
        return res;
    }
    
    void backtrack(vector<int>& candidates, vector<int>& current_res, int target, int index) {
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] == target) {
                current_res.push_back(candidates[i]);
                res.push_back(current_res);
            }
            else if (candidates[i] > target) continue;
            else {
                current_res.push_back(candidates[i]);
                backtrack(candidates, current_res, target - candidates[i], i);
            }
            current_res.pop_back();
        }
    }
    
    
};class Solution {
public:
    
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {    
        vector<int> cur;
        //sort(candidates.begin(), candidates.end());
        backtrack(candidates, cur, target, 0);
        return res;
    }
    
    void backtrack(vector<int>& candidates, vector<int>& current_res, int target, int index) {
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] == target) {
                current_res.push_back(candidates[i]);
                res.push_back(current_res);
            }
            else if (candidates[i] > target) continue;
            else {
                current_res.push_back(candidates[i]);
                backtrack(candidates, current_res, target - candidates[i], i);
            }
            current_res.pop_back();
        }
    }
    
    
};
