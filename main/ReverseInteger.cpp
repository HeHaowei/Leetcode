class Solution {
public:
    int reverse(int x) {
        
        int sign;
        if (x == -2147483648) return 0;
        if (x > 0) {
            sign = 1;
        } else {
            sign = -1;
            x = -x;
        }
        int result = 0;
        while (x > 0) {
            int current = x % 10;
            x = x / 10;
            if (result > 214748364) {
                return 0;
            } else if (result == 214748364) {
                if (current < 8 && x == 0) {
                    return sign * (2147483640 + current);
                } else if (current == 8 && x == 0 && sign == -1) {
                    return -2147483648;
                } else {
                    return 0;
                }
            } else {
                result = result * 10 + current;
            }
        }
        return result * sign;
    }
};
