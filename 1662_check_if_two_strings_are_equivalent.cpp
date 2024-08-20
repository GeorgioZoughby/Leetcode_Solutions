// Author: Georgio Zoughby

#include <vector>
#include <string>
#include <sstream>

class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>&word1, std::vector<std::string>& word2) {
        std::ostringstream result1;
        std::ostringstream result2;
        for (const std::string word : word1)
        {
            result1 << word;
        }
        for (const std::string word : word2)
        {
            result2 << word;
        }
        return result1.str() == result2.str();
    }
};
