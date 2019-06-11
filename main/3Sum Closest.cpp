class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
       int size = nums.size();
        
       if (size < 3) exit(-1); 
        
        sort(nums.begin(),nums.end());
       
        vector<int>::iterator it;
        int result = nums[0] + nums[1] + nums[2];
 
 
        for (it = nums.begin();it<nums.end()-2;it++)
        {
           
            
            vector<int>::iterator it2 = it + 1;
            vector<int>::iterator it3 = nums.end() - 1;
            
            while (it2 < it3)
            {
                int current = (*it) + (*it2) + (*it3);
                if (current == target) return target;
                if (abs(current-target) < abs(result - target))
                {
                    result = current;
                }
                
                if (current > target && it2<it3) it3--;
                else if (current < target && it2<it3) it2++;
                else break;
                
                
            }
            
        }
        
        return result;
        
        
    }
};
