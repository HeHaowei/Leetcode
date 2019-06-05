class Solution {
public:
    bool isMatch(string s, string p) {

        //bool result = true;
    	int size_s = s.size();
    	int size_p = p.size();
        
        int length_p  = 0;

    	//int ii=size_s - 1;
    	//int jj=size_p - 1;
        
        if (size_p == 0) return ((bool) (size_s ==0));
        else 
        {
            if (size_s == 0)
                if (p[1] == '*') 
                {
                    return isMatch(s,&p[2]);
                }
                else 
                {
                   return false;   
                }
            else if (p[0] == s[0] || p[0] == '.')
            {
            
                if (p[1] == '*')
                    return (isMatch(s,&p[2]) || isMatch(&s[1],p));
                else return (isMatch(&s[1],&p[1]));
                
            }
            
            else if (p[1] == '*')
            {
                return (isMatch(s,&p[2]));
            }
            
            else return false;
                        
        }
        
    }
};
