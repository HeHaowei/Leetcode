class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=0;
        for (auto it = nums.begin();it<nums.end();)
        {
            if (it != nums.begin())
            {
                if ((*it) == (*(it-1))) nums.erase(it);
                else
                {
                    it++;
                    n++;
                }
            }
            
            else
            {
                it++;
                n++;
            }
            
            
            
        }
        
        return n;
            
        
    }
};Remove Duplicates from Sorted Array
