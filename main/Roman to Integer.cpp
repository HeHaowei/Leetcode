class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        
        int size=s.size();
        
        int i=0;
        
        while (i<size)
        {
            if (s[i] == 'M') 
            {
                result += 1000;
                i++;
            }
            
            else if (s[i] =='D')
            {
                result += 500;
                i++;
            }
            
            else if (s[i] == 'C')
            {
                if (i<size-1 && s[i+1] == 'M')
                {
                    result += 900;
                    i += 2;
                }
                
                else if (i<size-1 && s[i+1] == 'D')
                {
                    result += 400;
                    i+=2;
                }
                
                else 
                {
                    result += 100;
                    i++;
                }
            }
            
            else if (s[i] == 'L')
            {
                result += 50;
                i++;
            }
            
            else if (s[i] == 'X')
            {
                if (i<size-1 && s[i+1] == 'C')
                {
                    result += 90;
                    i += 2;
                }
                
                else if (i<size-1 && s[i+1] == 'L')
                {
                    result += 40;
                    i += 2;
                }
                
                else 
                {
                    result +=10;
                    i++;
                }
            }
            
            else if (s[i] == 'V')
            {
                result += 5;
                i++;
            }
            
            else 
            {
                if (i<size-1 && s[i+1] == 'X')
                {
                    result += 9;
                    i += 2;
                }
                
                else if (i<size-1 && s[i+1] == 'V')
                {
                    result += 4;
                    i += 2;
                }
                
                else 
                {
                    result++;
                    i++;
                }
            }
            
        }
        
        return result;
        
    }
};
