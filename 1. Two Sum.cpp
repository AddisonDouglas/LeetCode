#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> mp;
        std::vector<int> returnVector;
        for (int i = 0; i < nums.size(); i++)
        {
            if(mp.find(target - nums[i]) == mp.end())
            {
                mp.insert({nums[i], i}); 
            }
            else
            {
                returnVector.push_back(mp.at(target - nums[i]));
                returnVector.push_back(i);
                return returnVector;
            }
        }
        return returnVector;
    }
};