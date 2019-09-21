class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
    
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        if (left > right) return -1;
        else if (left == right) {
            if (nums[left] == target) return left;
            else return -1;
        }
        if (target < nums[left] && target > nums[right]) return -1;
        int mid = (left + right) / 2;
        if (target == nums[mid]) return mid;
        else if (target > nums[mid]) {
            if (target <= nums[right]) return binarySearch(nums, target, mid + 1, right);
            else if (nums[mid] > nums[right]) return binarySearch(nums, target, mid + 1, right - 1 );
            else if (target >= nums[left]) return binarySearch(nums, target, left, mid - 1);
            else return -1;
        }
        else {
            if (target >= nums[left]) return binarySearch(nums, target, left, mid - 1);
            else if (target <= nums[right]) return binarySearch(nums, target, left + 1, right);
            else return -1;
        }
    }
    
};
