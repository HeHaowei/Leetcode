class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int s = digits.size();
        int i = s - 1;
        while (i >= 0 && digits[i] + 1 == 10) {
            digits[i] = 0;
            i--;
        }
        
        if (i == -1) {
            digits.insert(digits.begin(), 1);
        } else {
            digits[i] = digits[i] + 1;
        }
        return digits;
        
        
    }
};
