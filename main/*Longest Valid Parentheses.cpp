class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack <int> p;
        
        p.push(-1);
        int len = s.length();
        int max_len = 0;
        for (int i = 0; i < len;i++)
        {
            if(s[i] == '(') p.push(i);
            else 
            {
                p.pop();
                if (p.empty()) {
                    p.push(i);
                    continue;
                }
                else
                {
                    int current_len = i - p.top();
                if (current_len > max_len) max_len = current_len; 
                }   
            }            
            if (p.empty()) p.push(i);
        }
        
        return max_len;
    }
    
};
