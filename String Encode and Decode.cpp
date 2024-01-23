#include <iostream>
#include <vector>
#include <istream>
#include <string>
using namespace std;
class Solution {
public:

    string encode(vector<string>& strs) {
        
        string test;
        //std::cout << strs[1] << endl;
        for(auto s : strs)
        {
            test += s + '.';
        }
        cout << test << endl;
        return test;
    }

    vector<string> decode(string s) {
        vector<string> test;
        istringstream iss(s);
        string str;
          while (getline(iss, str, '.')) 
          {
             test.push_back(str);
          }
        return test;

    }
};
