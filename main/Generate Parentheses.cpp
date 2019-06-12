class Solution {
public:
    vector <string> result;
    vector<string> generateParenthesis(int n) {
        
        if (n==0) return result; 
        else 
        {
            string new_s = "";
            dfs(new_s,n,n);
            return result;
        }
    }
    
    void dfs(string current, int num1, int num2)
    {
        if (num2 == 0) result.push_back(current);
        else if (num1 == num2)
        {
            current.append(1,'(');
            dfs(current,num1-1,num2);
        }
        else if (num1 == 0)
        {
            current.append(1,')');
            dfs(current,num1,num2-1);
        }
        else
        {
            string new_current = current;
            new_current.append(1,'(');
            dfs(new_current,num1-1,num2);
            string new_current2 = current;
            new_current2.append(1,')');
            dfs(new_current2,num1,num2-1);
        }
    }
};
