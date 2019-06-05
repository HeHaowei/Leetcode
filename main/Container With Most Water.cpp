class Solution {
public:
    
    int maxArea(vector<int>& height) {
        
        int size = height.size();
   
        //a*b (a+k)*(b-1) = ab +kb-a kb-a>0
        
        int max_area = 0;
        
        int i=0;
        int j=size-1;
        
        while (i<j)
        {
            int new_area = (j-i) * min(height[i],height[j]);
            max_area = max(new_area,max_area);
            if (height[i]<height[j]) i++;
            else j--;
            
            
        }
        
        return max_area;
        
        
   //simple method
       /* 
        int max_area = 0;
        
        for (int i=0;i<size-1;i++)
          for (int j=i+1;j<size;j++)
          {
            int new_area = min(height[i],height[j]) * (j-i);
              
              if (new_area > max_area) max_area = new_area; 
          }
        
        return max_area;*/
    }
};
