class Solution {
public:
    // atoi(char*)
    int myAtoi(string str) {
        
        int len = str.size();
        int i=0;
        int sign = 1;
        int result = 0;
        
        while (str[i] == ' ') i++;
        if (!(str[i] == '-' || str[i] == '+' || (('0'<=str[i]) && (str[i]<='9')))) return 0;
        else 
        {
            if (str[i] == '-') 
        {
            sign = -1;
            i++;
        }
        else if (str[i] == '+') i++;
        
            if (!(str[i]>='0' && str[i] <='9')) return 0;
            else
            {
                while (i<len)
                {
                   if (!(str[i] >= '0' && str[i] <= '9')) break;
                    else
                   {
                    int k = str[i] - 48;   
                   if (result >214748364)
                   {
                       if (sign == 1) return 2147483647;
                       else return -2147483648;
                   }
                   else if (result == 214748364)
                     {if (sign == 1 && k >= 8) return 2147483647;
                       else if (sign == -1 && k>8) return -2147483648;
                      else  return  sign*result * 10 +sign*k;
                     
                     }
                   else     
                   {
                   
                    result = result * 10 +k;
                    i++;
                   }}
                }
                result *= sign;
                return result;
                
                
            }
            
            
        }
        
        
        
        
        
    }
};  
