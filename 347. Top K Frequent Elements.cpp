
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>
class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::map<int, int> counters;  
        std::vector<int> return_vector;
        for(auto i: nums)
        {
            ++counters[i];
        }
       std::vector<std::vector<int>> bucket(nums.size()+1);
        for(auto& [key,value]: counters){
            bucket[value].push_back(key);
        }
        for(int i= bucket.size()-1; i>=0; i--){
            for(auto n: bucket[i]){
                if(k>0){
                    return_vector.push_back(n);
                    k--;
                }
            }
        }
        return return_vector;
    }
   


};