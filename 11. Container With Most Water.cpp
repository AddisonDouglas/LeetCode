class Solution {
public:
    int maxArea(vector<int>& height) {
        int largest_area = 0;
        int left = 0; 
        int right = height.size() - 1;
        while(left < right)
        {
            int area = 0;
            if(height[left] < height[right])
            {
                area = (right - left) * height[left];
                left += 1;
                if(area > largest_area)
                {
                    largest_area = area;
                }
            }
            else if(height[left] > height[right])
            {
                area = (right - left) * height[right];
                right -= 1;
                if(area > largest_area)
                {
                    largest_area = area;
                }
            }
            if(height[left] == height[right])
            {
                area = (right - left) * height[left];
                left += 1;
                if(area > largest_area)
                {
                    largest_area = area;
                }
            }

        }

        return largest_area;
        
    }
};