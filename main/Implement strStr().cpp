class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int needle_size = needle.size();
        int haystack_size = haystack.size();
        
        if (needle_size > haystack.size()) return -1;
        if (needle_size == 0) return 0;
        
        int i = 0;
        int ii = 0;
        int p = 0;
        
        while (p < needle_size && i < haystack_size) {
            while (ii < haystack_size && haystack[ii] != needle[0]) {
                ii++;
                i = ii;
                // return (strStr(&haystack[ii], needle) > 0 ? ii + strStr(&haystack[ii], needle): -1);
            }
            
            if (haystack[i] == needle[p])
            {            
                p++;
                i++;
            }
            else
            {
                p = 0;
                ii++;
                i = ii;
            }

        }
        if (p < needle_size) return -1;
        else return ii;
        
    }
};
