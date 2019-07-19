class Solution {
public:
    int divide(int dividend, int divisor) {
        
        int sign = -1;
        int unsigned_result = 0;
     
        if (dividend > 0) { 
            {
                dividend = -dividend;
                sign = -sign;
            }
        }
        
        if (divisor > 0) {
            divisor = -divisor;
            sign = -sign;
        }
        
        if (divisor == -1) unsigned_result = dividend;
        else
        {
            while (dividend <= divisor) {
                
                int temp_divisor = divisor;
                int time = -1;
                
                while (dividend - temp_divisor <= temp_divisor) {
                    time += time;
                    temp_divisor += temp_divisor;
                }
                
                if (dividend <= temp_divisor) {
                    unsigned_result += time;
                    dividend -= temp_divisor;
                }
            }
        }
        
        if (unsigned_result == -2147483648 && sign == -1) return 2147483647;
        else return unsigned_result * sign;
    }
    
};
