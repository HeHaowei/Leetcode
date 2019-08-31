class Solution {
public:
    int longestValidParentheses(string s) {
        
        
        int len = s.length();
        if (len < 2) return 0;
        int a[len];
        a[0] = 0;
        if (s[0] == '(' && s[1] == ')') a[1] = 2;
        else a[1] = 0;
        
        int max_len = a[1];
        
            for (int j = 2; j < len; j++) 
            {
                if (s[j] == '(') a[j] = 0;
                else 
                {
                    if (s[j-1] == '(') a[j] = a[j-2] + 2;
                    else { //s[j-1] = ')' in the middle: a[j-1]
                        if (j-1-a[j-1] >= 0 && s[j-1-a[j-1]] == '(') 
                        {
                            a[j] = a[j-1] + 2;
                        
                            if (j-2-a[j-1] >= 0) a[j] += a[j-2-a[j-1]];
                        }
                            else a[j] = 0;
                    }
                }
                
                if (a[j] > max_len) max_len = a[j]; 
            }
        
        return max_len;
        
    }
    
};
