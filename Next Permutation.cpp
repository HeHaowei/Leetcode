class Solution {
public:
    void nextPermutation(vector<int>& nums) {

    	int size = nums.size();

    	if (size == 1) return;
    	else {
    	int i = size-1;

    	while (i > 0 && nums[i] <= nums[i-1]) {
    		i--;
    	}

    	if (i == 0 && nums[i] >= nums[i+1]) {
    		sort(nums.begin(),nums.end());
    	} 
    	else
    	{
    		//nums[i] > nums[i-1]

    		int change = i;
    		int current_pos = i;
    		while (current_pos <= size-1)
    		{
    			if (nums[current_pos] < nums[change] && nums[current_pos] > nums[i-1])
    			{
    				change = current_pos;
    			}
    			current_pos++;
    		}


    		
    		int temp = nums[i-1];
    		nums[i-1] = nums[change];
    		nums[change] = temp;

    		sort(nums.begin()+i,nums.end());

    	}
    }   
    }
};
