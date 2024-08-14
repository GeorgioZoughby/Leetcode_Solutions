#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> indexes;
        for (std::size_t i = 0; i < words.size(); ++i)
        {
            for (const char& e : words[i])
            {
                if (e == x)
                {
                    indexes.push_back(i);
                    break;
                }
            }
        }
        return indexes;
    }
};
