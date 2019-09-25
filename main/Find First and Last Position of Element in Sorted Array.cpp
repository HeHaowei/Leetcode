class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
    
    vector<int> binarySearch(vector<int>&nums, int target, int left, int right) {
        int result_left;
        int result_right;
        vector<int>false_result;
        false_result.push_back(-1);
        false_result.push_back(-1);
        if (left > right) return false_result;;
        int mid = (left + right) / 2;
        if (target == nums[mid]) {
            result_left = mid;
            result_right = mid;
            if (mid > left) {
                if (nums[mid - 1] == target) result_left = binaryiSearch(nums, target, left, mid - 1, 0);
                }
            if (mid < right) {
                if (nums[mid + 1] == target) result_right = binaryiSearch(nums,target, mid + 1, right, 1);
            }
            vector<int> result;
            result.push_back(result_left);
            result.push_back(result_right);
            return result;
            }
        else if(target > nums[mid]) {
            return binarySearch(nums, target, mid + 1, right);
        }
        else return binarySearch(nums, target, left, mid - 1);
        
    }
    int binaryiSearch(vector<int>&nums, int target, int left, int right, int dir) {
        if (left >= right) return left;
        int mid = (left + right) / 2;
        if (target == nums[mid]) {
            if (mid > left && dir == 0 && nums[mid - 1] == target) return binaryiSearch(nums, target, left, mid - 1, dir);
            else if (mid < right && dir == 1 && nums[mid + 1] == target) return binaryiSearch(nums, target, mid + 1, right, dir);
            else return mid;
        }
        else if (target > nums[mid]) return binaryiSearch(nums, target, mid + 1, right, dir);
        else return binaryiSearch(nums, target, left, mid - 1, dir);        
    }
    
        
};
