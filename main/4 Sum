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
        
        else if (num_n == 2)
        {
            vector<int>::iterator it1 = nums.begin();
            vector<int>::iterator it2 = nums.end() - 1;
            
            while (it1 < it2)
            {
                if (*it1 > target && *it1 > 0) return;
                if (*it2 < target && *it2 < 0) return;
                if ((*it1 + *it2) == target)
                {
                    solution.push_back(*it1);
                    solution.push_back(*it2);
                    result.push_back(solution);
                    solution.erase(solution.end()-2,solution.end());
                    while (it1<it2 && *(it1+1) == *(it1)) it1++;
                    while (it1<it2 && *(it2-1) == *(it2)) it2--;
                    if (it1 < it2)
                    {
                        it1++;
                        it2--;
                    }
                    
                }
                
                else if (*it1 + *it2 < target) it1++;
                else it2--;
            }
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
