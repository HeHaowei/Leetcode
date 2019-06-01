class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        int total = size1 + size2;
        int current = 0;
        int current_value;
        int previous_value = 0;
        
        float result;
        
        if (total % 2 ==0) 
        {
            while (current <= total/2)
            {
                if (i<size1 && j<size2)
                {
                    
                    if (nums1[i] < nums2[j]) previous_value = nums1[i++];
                     else previous_value = nums2[j++];
                    
                }
                
                else if (i<size1)
                {
                    previous_value = nums1[i++];
                }
                
                else
                {
                    previous_value = nums2[j++];
                }
                
                current++;
                if (current == total/2)
                {
                    current_value = previous_value;  
                }
                
                
            
            }
            
            result = float (current_value + previous_value) /2.0;
        }
        
        else
        {
            while (current <= total / 2)
            {
                 if (i<size1 && j<size2)
                {
                    
                    if (nums1[i] < nums2[j]) previous_value = nums1[i++];
                     else previous_value = nums2[j++];
                    
                }
                
                else if (i<size1)
                {
                    previous_value = nums1[i++];
                }
                
                else
                {
                    previous_value = nums2[j++];
                }
                
                current++;
            }
            
            result = float (previous_value);
                
        }
        
        return result;
        
    }
};
