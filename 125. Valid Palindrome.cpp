class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] < '0' || s[i] > '9' && s[i] < 'a'|| s[i] > 'z') {
                s.erase(i, 1);
                i--;
            }
    }
        std::string test_string = s;
        reverse(s.begin(), s.end());
        return s == test_string;
    }
};