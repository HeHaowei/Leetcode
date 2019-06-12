class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> solution;
        nSum(nums,solution,target,4);
        return result;
    }
    
    vector<vector<int>> result;
    
    
    void nSum(vector<int>nums, vector<int> solution, int target, int num_n)
    {
        if (num_n == 0)
        {
            if (target == 0) result.push_back(solution);
        }
        
        else if (nums.size() < num_n) return;
        
        else
        {
            for (vector<int>::iterator it = nums.begin();it<=nums.end() - num_n;)
            {
                if (*it > target && *it > 0) break;
                int kk = *it;
                solution.push_back(kk);
               
                nums.erase(it);
                 
                
                nSum(nums,solution,target-kk,num_n-1);
                
                while (it<=nums.end() - num_n && *it == kk)
                {
                    nums.erase(it);
                    
                }
                    
                solution.erase(solution.end()-1);
                
        
            }
        }
    }
};
