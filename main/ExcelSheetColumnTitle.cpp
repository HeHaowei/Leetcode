class Solution {
public:
    string convertToTitle(int n) {
        
        string result;
        
        while (n) {
            int current = n % 26;
            current = (current == 0) ? 26 : current;
            char current_char = 'A' + current - 1;
            n = (n - current) / 26;
            result.insert(0, 1, current_char);
        }
        return result;
        
        
    }
};
