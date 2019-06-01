class Solution {
public:
    string convert(string s, int numRows) {
                
        //method1
        /*
        if (numRows == 1) return s;
        
        int len = s.length();
        
        vector<vector<char>> new_st(numRows);
        
        int ii=0;
        int row_num = 0;
        int dir = 1;
        
        while (ii<len)
        {
           new_st[row_num].push_back(s[ii]);
            ii++;
            
            if (row_num + dir < 0 || row_num + dir >= numRows) 
            {
                dir = -dir;
            }
            row_num+= dir;
            
        }
        
        string result = "";
        
        for (int i=0; i<numRows;i++)
            for (int j=0;j<new_st[i].size();j++)
                result = result + new_st[i][j];
        
        return result;*/
        
        //method2
                //1,5,9,13
        //2,4,6,8,10,12,14
        //3,7,11
        
        //1,7,13
        //2,6,8,12,14
        //3,5,9,11
        //4,10,
        
        /*
        first row: 0 + 2*(num_Rows-1) + 2*(num_Rows-1)+...
        second row: 1 + 2*(num_Rows - 2) + 2* (2-1) +...
        third row: 2 + 2* (num_Rows - 3) + 2*(3-1) + ...
        */
        if (numRows == 1) return s;
        else
        {
        string result = "";
        int len = s.size();
        for (int i=0;i<numRows;i++)
        {
            int k = i;
            
            int index = 0;
            
            int add1 = 2*(numRows - i - 1);
            int add2 = 2*i;
            while (k<len)
                
                {
                
                result = result.append(1,s[k]);
                if (i == 0) k+=add1;
                else if (i==numRows-1) k+=add2;
                else
                {
                    if (index == 0)
                        k+=add1;
                    else k+=add2;
                    
                    index = (index + 1) % 2;
                }
                    
        }
        }
        
        return result;
        }
    }
};
