class Solution {
public:
    int trap(vector<int>& height) {
       int ans = 0;
       int left = 1; 
       int right = height.size() - 2;
       int maxleft = height[0] , maxright =  height[height.size()-1];
       while(left <= right)
       {
           if(maxleft < maxright)
           {
               if(height[left] >= maxleft)
               {
                   maxleft = height[left];
               }
               else
               {
                   ans += maxleft - height[left]; 
               }
                left++;
           }
           else
           {
               if(height[right] >= maxright)
               {
                   maxright = height[right];
               }
               else
               {
                   ans += maxright - height[right];
               }
                right--;
           }
       }
       return ans ; 
    }
};