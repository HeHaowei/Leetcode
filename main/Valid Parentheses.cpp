class Solution {
public:
    bool isValid(string s) {
        
        int len = s.size();
        stack <char> mystack;
        for (int i=0;i<len;i++)
        {
            if (s[i] == ')')
            {
                if (mystack.empty()) return false;
                char c = mystack.top();
                mystack.pop();
                if (c != '(') return false;
            } 
            
            else if (s[i] == '}')
            {
                if (mystack.empty()) return false;
                char c = mystack.top();
                mystack.pop();
                if (c != '{') return false;
            }
            
            else if (s[i] == ']')
            {
                if (mystack.empty()) return false;
                char c = mystack.top();
                mystack.pop();
                if (c != '[') return false;
            }
            
            else mystack.push(s[i]);
        }
        
        return mystack.empty();
        
    }
};
