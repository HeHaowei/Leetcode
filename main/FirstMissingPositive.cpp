class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size_np = 0;
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] <= 0) size_np++; 
        }
        if (size_np == nums.size()) return 1;
        for (int i = 0; i < nums.size();) {
            if (nums[i] <= 0) {
                i++;
                continue;
            }
            else {
                long ss = long(nums[i]) + long(size_np);
                if (ss <= nums.size()) {
                    // if (nums[i] == i - size_np + 1) {
                    //     i++;
                    //     continue;
                    // }
                    // two senarios: 1. size_np + nums[i] - 1 == i
                    // 2. nums[size_np + nums[i] - 1] == nums[i] if size_np + nums[i] - 1 != i
                    if (nums[size_np + nums[i] - 1] == nums[i]) {
                        i++; 
                        continue;
                    }                    
                    
                    int swap = nums[size_np + nums[i] - 1];
                    nums[size_np + nums[i] - 1] = nums[i];
                    nums[i] = swap;
                }
                else {
                    i++;
                }
            }
        }
        
        for (int i = size_np; i < nums.size(); i++) 
            if (nums[i] != i - size_np + 1) return i - size_np + 1;
        
        return nums[nums.size() - 1] + 1;
        
    }
};
