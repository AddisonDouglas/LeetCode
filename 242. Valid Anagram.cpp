#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::map<char, int> mp;;
        for (int i = 0; i < s.length(); i++) {
            if(mp.count(s[i])){
                mp[s[i]] += 1;
            }
            else{
                mp[s[i]] = 1;
            }
        }
        std::map<char, int> mp2;;
        for (int i = 0; i < t.length(); i++) {
            if(mp2.count(t[i])){
                mp2[t[i]] += 1;
            }
            else{
                mp2[t[i]] = 1;
            }
        }
    if(mp == mp2){
        return true;
    }
        return false;
    }
};