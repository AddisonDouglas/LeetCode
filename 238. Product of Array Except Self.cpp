#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> prefix;
        prefix.push_back(nums[0]);
        std::vector<int> postfix;
        postfix.push_back(nums[nums.size() - 1]);
        std::vector<int> ReturnVector;
        for(int i  = 1; i < nums.size(); i++)
        {
            prefix.push_back(nums[i] * prefix[i - 1]);
            postfix.push_back(nums[nums.size() - i - 1] * postfix[i - 1]);

        }
        std::reverse(postfix.begin(), postfix.end());
        ReturnVector.push_back(1 * postfix[1]);
        for(int i  = 1; i < nums.size() - 1; i++)
        {
            ReturnVector.push_back(prefix[i-1] * postfix[i + 1]);


        }
        ReturnVector.push_back(1 * prefix[prefix.size()-2]);

        
         return ReturnVector;



        
    }
};