class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = "";
        
        int s = strs.size();
        
        if (s==0) return result;
        
        if (s==1) return strs[0];
        
        int min_size = strs[0].size();
        char com = strs[0][0];
        
        for (int i=1; i<s; i++)
        {
            if (strs[i].size() < min_size) min_size = strs[i].size();
            
            if (!(strs[i][0] == com)) 
            {
                return "";
                break;    
            }
        }
        
        result.append(1,com);
        
        int ii =1;
        
        while (ii<min_size)
        {
            com = strs[0][ii];
            for (int i = 1; i < s; i++)
            
            if (!(strs[i][ii] == com)) 
            {
                return result;
            }
                result.append(1,com);
            ii++;
        }
        
        return result;
        
    }
};
