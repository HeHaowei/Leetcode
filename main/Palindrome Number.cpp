class Solution {
public:
    bool isPalindrome(int x) {
        
        bool result = true;
        
        if (x<0) result = false;
        else
        {
            int reverse_x = 0;
            int origin_x = x;
            while (x>0)
            {
                int temp = x%10;
                if ((reverse_x > 214748364) || (reverse_x == 214748364 && temp > 7)) return false;
                else
                {
                    reverse_x = reverse_x * 10 + temp;
                x = x/10;
                }
            }
            
            if (origin_x != reverse_x) result = false; 
            
        }
        return result;
    }
};
