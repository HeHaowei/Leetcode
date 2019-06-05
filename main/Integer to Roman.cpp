class Solution {
public:
    string intToRoman(int num) {
        
        string result = "";
            int convert_num;
            if (num >= 1000)
            {
               convert_num = num /1000;
                
                
                result.append(convert_num,'M');
                num = num % 1000;
                
                return result.append(intToRoman(num));
            }
            
            else if (num >= 100)
            {
                convert_num = num / 100;
                
                if (convert_num == 9)
                {
                    result.append("CM");
                    convert_num -=9;
                }
                
                else if (convert_num >=5)
                {
                    result.append(1,'D');
                    convert_num -= 5;
                    
                    
                
                }
                if (convert_num == 4) result.append("CD");
                else result.append(convert_num,'C');
                 
                
                num = num % 100;
                
                return result.append(intToRoman(num));
            }
            
            else if (num >= 10)
            {
                convert_num = num / 10;
                
                if (convert_num == 9)
                {
                    result.append("XC");
                    
                    convert_num -=9;
                    
                }
                
                else if (convert_num >=5)
                {
                    result.append(1,'L');
                    convert_num -= 5;
                    
                    
                
                }
                
                if (convert_num == 4)
                    result.append("XL");
                else result.append(convert_num,'X');
                
                num %= 10;
                return result.append(intToRoman(num));
            }
            
            else 
            {
                if (num >= 5)
            {
                convert_num = num / 5;
                if (num == 9)
                {
                    result.append(1,'I');
                    result.append(1,'X');
                    return result;
                }
                
                else 
                {
                    
                result.append(1,'V');
                num%=5;
                return result.append(intToRoman(num));
                }
            }
        
            else 
            {
                if (num == 4)
                {
                    result.append(1,'I');
                    result.append(1,'V');
                    
                }
                else 
                {
                    result.append(num,'I');
                    
                }
                
                return result;
            }
            }
        
    }
};
