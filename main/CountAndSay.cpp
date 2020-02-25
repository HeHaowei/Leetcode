class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string s("1");
        for (int i = 2; i <= n; i++) {
            s = rev(s);
        }
        return s;
    }
    
    string rev(string num) {
        int len = num.size();
        int i = 0;
        char current = num[0];
        string result = "";
        int current_len  = 1;
        
        if (len == 1) return result + to_string(current_len) + current;
        
        while (i < len - 1) {
            i++;
            if (num[i] == current) {
                current_len++;
            }
            else {
                result = result + to_string(current_len) + current;
                current_len = 1;
                current = num[i];
            }
        }
        return result + to_string(current_len) + current;
    }
};
