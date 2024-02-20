class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            if(i > 0 && a == nums[i - 1])
            {
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right )
            {
                int threesum = a + nums[left] + nums[right];
                if(threesum > 0)
                {
                    right -= 1;

                }
                else if(threesum < 0)
                {
                    left += 1;

                }
                else
                {
                    vector<int> vec;
                    vec.push_back(a);
                    vec.push_back(nums[left]);
                    vec.push_back(nums[right]);
                    res.push_back(vec);
                    left += 1;
                    while(nums[left] == nums[left -1] && left < right)
                    {
                        left += 1;
                    }
                }

            }
        }
        return res;
        
    }
};