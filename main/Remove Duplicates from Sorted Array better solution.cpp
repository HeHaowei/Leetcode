class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=0;
        if (nums.size() == 0) return 0;
        auto it0 = nums.begin();
        //if (it0 == nums.end()) return n;
        for (auto it = nums.begin();it<nums.end();it++)
        {
            if ((*it) != (*it0))
            {
                it0++;
                n++;
                *it0 = *it;
            }
            
            
        }
        
        return n+1;
            
        
    }
};
