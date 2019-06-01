class Solution {
public:
    int reverse(int x) {
        
        if (x==-2147483648) return 0;
        else
        {
        int sign = 1;
        if (x<0) 
        {
            x = -x;
            sign = -1;
        }
        int result = 0;
        while (x>0)
        {
            //2147483647
            if (result > 214748364) return 0; 
            else
            {
            int temp = x % 10;
            
            if (result == 214748364 && temp >= 8) return 0;
                else 
                {
            result = result * 10 + temp;
           
            x = x/10;
                }
        }
        }
        
        result *=sign;
        return result;
        }
    }
};
