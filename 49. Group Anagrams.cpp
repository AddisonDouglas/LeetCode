#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>
#include <unordered_map>
#include <list>
#include <algorithm>
class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mp;
        std::vector<std::vector<std::string>> returnVector;
        for(int i = 0; i < strs.size(); i++)
        {
            std::string word = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(word);
        }
        for(auto i: mp){
            returnVector.push_back(i.second);
        }


        return returnVector;
    }
};