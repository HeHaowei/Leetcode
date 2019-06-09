class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
     vector<vector<int>> result;
        
        if (nums.size() <= 2) return result;
        
        sort(nums.begin(),nums.end());
        
        
        for (vector<int>::iterator it= nums.begin();it<nums.end()-2;it++ )
        {
            int target = -(*it);
            unordered_set<int>check;
            
            
            for (vector<int>::iterator it2 = it+1; it2 < nums.end();it2++)
            {
                
                if (check.find(target-(*it2)) != check.end())
                {
                    vector <int> new_result;
                    new_result.push_back((*it));
                    new_result.push_back(target - (*it2));
                    new_result.push_back((*it2));
                    
                    //sort(new_result.begin(),new_result.end());
                    
                    result.push_back(new_result);
                    
                    new_result.clear();
                }
            else 
            {
                check.emplace(*(it2));
            }
               
        }
            check.clear();
        }
        
     sort(result.begin(),result.end());
     result.erase(unique(result.begin(),result.end()),result.end());  
         
     return result;   
    }
};
