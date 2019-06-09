class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        if (nums.size() <= 2) return result;
        // -4,-1,-1,0,1,2
        
        sort(nums.begin(),nums.end());
        
        //unordered_map<int,int>check_re;
        
        for (vector<int>::iterator it= nums.begin();it<nums.end()-2;it++ )
        {
            int target;
            if (it == nums.begin()) 
            {
               target = -(*it);
            }
            else if (*(it) == *(it-1)) continue;
            else
            {
                target = -(*it);
            }
            
            if (target < 0) break;
            //unordered_set<int>check;
            
            vector<int>::iterator it2 = it + 1;
            vector<int>::iterator it3 = nums.end() - 1;
            
            while (it2 < it3)
            {
                if ((*it2) + (*it3) == target)
                {
                    vector<int> new_result;
                    new_result.push_back(*it);
                    new_result.push_back(*it2);
                    new_result.push_back(*it3);
                    result.push_back(new_result);
                    new_result.clear();
                    while (it2<it3 && *(it2+1) == *(it2)) it2++;
                    if (it2 < it3) it2++;
                    while (it3>it2 && *(it3-1) == *(it3)) it3--;
                    if (it3 > it2) it3--;
                }
                
                else if ((*it2) + (*it3) < target) it2++;
                else it3--;
                
            }
            
        }
        
     //sort(result.begin(),result.end());
     
     //result.erase(unique(result.begin(),result.end()),result.end());  
         
     return result; 
        
        
    }
};
