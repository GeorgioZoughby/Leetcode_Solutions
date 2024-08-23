// Author: Georgio Zoughby

#include <string>

class Solution {
public:
    std::string truncateSentence(std::string s, int k) {
        std::string result;
        int wordCount = 0;
        for (char c : s) {
            if (c == ' ') {
                ++wordCount;
                if (wordCount == k) break;
            }
            result += c;
        }
        return result;
    }
};

