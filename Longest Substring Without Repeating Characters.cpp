class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map <char,int> sub;
        
        int maxlen = 0;
        int len = s.length();
        int current = 0;
        int kk=0;
        
        for (int i=0;i<len;i++)
        {
          if (sub.find(s[i])!= sub.end())
          {
              /*int new_kk=sub[s[i]] + 1;
              for (int j=sub[s[i]];j>=kk;j--) sub.erase(s[j]);
              kk = new_kk;
              sub.emplace(s[i],i);
              current = sub.size();*/
              
              if (kk > sub[s[i]])
              {
                  current += 1;
                 
              }
              else 
              {    
                 current = i - sub[s[i]];
                 kk = sub[s[i]] + 1;
              }
              
              sub[s[i]] = i;
          }
            
          else
          {
              sub.emplace(s[i],i);
              current +=1;
              
          }
            if (current > maxlen) maxlen = current;
            
        }
        
        return maxlen;
    }
};
