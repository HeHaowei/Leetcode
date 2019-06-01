class Solution {
public:
    
        
    /*int check_whether(vector<vector<int>> &check_t, int ii, int jj, string s)
    { 
      if (check_t[ii][jj]) return check_t[ii][jj];
       else
       {
        if (ii == jj) 
      { 
          check_t[ii][jj] = 1;
        
      }
        
        else if ((ii + 1 == jj) )
        {
            if (s[ii] == s[jj]) 
                check_t[ii][jj] = 2;
            else check_t[ii][jj] = -1;
        }
        else if (s[ii] != s[jj])
        {
            check_t [ii][jj] = -1;
            
        }
            else if (check_t[ii+1][jj-1] >= 1)
            {
               
                   check_t[ii][jj] = check_t[ii+1][jj-1] + 2;
                  
               
                
            }
        
        else 
        
           if (check_t[ii+1][jj-1] == -1)
           {
               check_t[ii][jj] = -1;
               
           }
            else 
            {
                //check_t[ii][jj] = 2 + check_whether(check_t,ii+1,jj-1,s);
                
                if (check_whether(check_t,ii+1,jj-1,s) >= 1)
                    check_t[ii][jj] = 2 + check_t[ii+1][jj-1];
            }
               
        return check_t[ii][jj];
       }
    };*/
    
    string longestPalindrome(string s) {
        
        //bacbbaacbbcabc
        
        //111123111245
        
        
        string best_str = "";
        
        int len = s.length();
        
        if (len != 0)
        {
        int max_len = 0;
        //int check_len[len][1000] = {0};
        //int ** check_len;
            //check_len = new int*[len];
            
            /*for (int i=0;i<len;i++)
            {
                check_len[i] = new int[len];
            }*/
            
            //vector <vector<int>> check_len(len,vector<int>(len,0));
        //max_len = check_whether(check_len,1,1,s);
            
            int check_len[len][len];
        int imax = 0;
        int jmax = 0;
        
        for (int i=len-1;i>=0;i--)
        {
            
            
            for (int j=i;j<len;j++)
            {
               
               if (i==j) check_len[i][j] = 1;
                else if (i+1==j && s[i]==s[j]) check_len[i][j] =2;
                else if (check_len[i+1][j-1] > 0 && s[i] == s[j]) check_len[i][j] = 2 + check_len[i+1][j-1];
                else check_len[i][j] = 0;
                    
                
               /*if (max_len < check_whether(check_len,i,j,s)) 
               {
               max_len = check_len[i][j];    
               imax = i;
               jmax = j;
                
            }*/
            if (check_len[i][j] >= max_len)
            {
                max_len = check_len[i][j];
                imax = i;
                jmax = j;
            }
        
            }
            
        }
        /*for (int i = imax; i <= jmax; i++)
        best_str = best_str + s[i];*/
            best_str = s.substr(imax,jmax-imax+1);
        }
            
        return best_str;
    }
};
