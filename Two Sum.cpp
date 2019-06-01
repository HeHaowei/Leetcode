class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <int> result;
        
        /*//vector<int>::iterator it;
        for (auto it = nums.begin(); it != nums.end()-1;it++)
           for (auto it2 = it+1; it2 != nums.end(); it2++)
        {
            if ((*it) + (*it2) == target)
            {
                
                result.push_back(it-nums.begin());
                result.push_back(it2-nums.begin());
                
                return result;
            }
        }*/
        
        unordered_map <int,int> check;
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            if (check.find(*it) != check.end())
            {
                result.push_back((check[*it]));
                result.push_back(it-nums.begin());
                break;
            }
            else
            {
                check.emplace((target-*it),it-nums.begin());
            }
                
        }
        
      /*unordered_set<int> check;
      
      unordered_map<int,int> value;
        
        
        for (vector<int>::iterator it = nums.begin(); it < nums.end(); it++)
        {
            if (  check.find(*it) != check.end())
            {
                result.push_back(value[*it]);
                result.push_back(it - nums.begin());
                break;
            }
            
            else
            {
                int kk=*it;
                check.insert(target-kk);
                value[target-kk] = it - nums.begin();
                
            }
        }*/
            
      return result;
        
        
    }
};
