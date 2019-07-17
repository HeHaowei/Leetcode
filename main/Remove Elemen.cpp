class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0;
        int len = nums.size();
        if (len == 0) return len;
        int j = len - 1;
        
        
        while (i <= j)
        {
            while (i < len && nums[i] != val) i++;
            while (j >= 0 && nums[j] == val) 
            {
                j--;
                len--;
            }
            
            if (i < j)
            {
               swap(&nums[i], &nums[j]);  
            }            
        }
        
        return len;
        
    }
    
    void swap(int* num_a, int* num_b) {
        
        int num_c = *(num_b);
        *num_b = *num_a;
        *num_a = num_c;
    }
};
