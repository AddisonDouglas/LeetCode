#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> test;
        for (int i = 0; i < nums.size(); i++) {
            if(test.count(nums[i]) >= 1){
                std::cout << "x";
                return true;
            }
            else{
                test.insert(nums[i]);
                std::cout << "y";
                }
            }
            return false;
            }
            
    };
        