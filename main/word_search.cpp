class Solution {
public:
    
    struct pair_hash {
        inline size_t operator()(const pair<int, int> & p) const{
            return p.first* 200 + p.second;
        }
    };
    
    unordered_set<pair<int, int>, pair_hash> visited;
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int r = board.size();
        int c = board[0].size();
        if (word.size() == 0) return true;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++) {
                if (board[i][j] == word[0]) {
                    if (word.size() == 1) return true;
                    visited.insert(make_pair(i,j));
                    if (dfs(board, &word[1], i, j)) return true;
                    visited.erase(make_pair(i,j));
                }
            }
        
        return false;
        
    }
    
    bool dfs(vector<vector<char>>& board, string word, int i, int j) {
        int r = board.size();
        int c = board[0].size();
        bool result = false;
        if (i > 0 && (board[i - 1][j] == word[0]) && (visited.find(make_pair(i-1,j)) == visited.end())) {
         if (word.size() == 1) {
             return true;
         }
            else {
                visited.insert(make_pair(i - 1, j));
                result = dfs(board, &word[1], i - 1, j);
                if (result == true) return result;
                visited.erase(make_pair(i - 1, j));
            }
        } 
        
        if (i < r - 1 && (board[i + 1][j] == word[0]) && (visited.find(make_pair(i + 1,j)) == visited.end())) {
         if (word.size() == 1) {
             return true;
         }
            else {
                visited.insert(make_pair(i + 1, j));
                result = dfs(board, &word[1], i + 1, j);
                if (result == true) return result;
                visited.erase(make_pair(i + 1, j));
            }
        }

        if (j > 0 && (board[i][j - 1] == word[0]) && (visited.find(make_pair(i,j - 1)) == visited.end())) {
         if (word.size() == 1) {
             return true;
         }
            else {
                visited.insert(make_pair(i, j - 1));
                result = dfs(board, &word[1], i, j - 1);
                if (result == true) return result;
                visited.erase(make_pair(i, j - 1));
            }
        } 
        
        if (j < c - 1 && (board[i][j + 1] == word[0]) && (visited.find(make_pair(i,j + 1)) == visited.end())) {
         if (word.size() == 1) {
             return true;
         }
            else {
                visited.insert(make_pair(i, j + 1));
                result = dfs(board, &word[1], i, j + 1);
                if (result == true) return result;
                visited.erase(make_pair(i, j + 1));
            }
        }
        
        return result;
        
    }
};
