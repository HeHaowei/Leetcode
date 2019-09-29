class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //a[j][n-1-i] = a[i][j]
        //a[i][j] = a[n - 1 - j][i] 
        //j' =  n - 1 - i, i' = j i = n - 1 - j' j = i'
        // (0,1) (1,3)(3,2) (2,0)  (0,0)(0,3)(3,3)(3,0)
        //i,j -> j,n-1-i -> n-1-i, n-1-j -> n-1-j, i ->i,j
        
        int n = matrix.size();
        vector<vector<int>> record(n, vector<int>(n, 0));
        int i = 0, j = 0;
        int time = 0;
        while (time < n*n) {
            if ((2*i+1 == n) && (2*j +1 == n)) {
                time++;
                break;
            }
            else if (record[i][j] == 1) {
                j++;
                if (j > n - 1) {
                    i++;
                    j = 0;
                }
                continue;
            }
            else {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                record[i][j] = 1;
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                record[n -1-j][i] = 1;
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                record[n-1-i][n-1-j] = 1;
                matrix[j][n-1-i] = temp;
                record[j][n-1-i] = 1;
                time += 4;
                if (j < n - 1) j++;
                else {
                    i++;
                    j = 0;
                }
            }
        }
        
    }
};
