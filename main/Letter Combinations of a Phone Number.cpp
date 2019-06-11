class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        //dfs
        vector<string> fi_result;
        if (digits.size() == 0) return fi_result;
        string current = "";
       dfs(digits,current);
        
        return result;
        
    
    }
    
    vector <string> result;
    
    void dfs(string digits, string current)
    {
       //static vector <string> result; 
       if (digits.size() == 0) 
       {
           result.push_back(current);
           //return result;
           
       }
        else
        {
            int num = 3;
            char ch;
            if (digits[0] == '7')
            {
                num = 4;
                ch = 'p';
            }
            else if (digits[0] == '8')
            {
                num = 3;
                ch = 't';
            }
            else if (digits[0] == '9')
            {
                num = 4;
                ch = 'w';
            }
            else
            {
                num = 3;
                ch = 3*digits[0] - 53;
            }
            
            for (;num>0;ch++,num--)
            {
                string new_current = current;
                new_current.append(1,ch);
                //result = dfs(&digits[1],new_current);
                dfs(&digits[1],new_current);
            }
            
           // return result;
        }
    }
    
};
