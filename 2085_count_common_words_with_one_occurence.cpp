// Author: Georgio Zoughby
#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    int countWords(std::vector<std::string>& words1, std::vector<std::string>& words2) {
        std::unordered_map<std::string, int> freq_w;
        for (const std::string &w : words1)
        {
            if (freq_w[w] == 0) freq_w[w] = 1;
            else if (freq_w[w] == 1) freq_w[w] = -1;
        }
        for (const std::string &w : words2)
        {
            if (freq_w[w] == 1) freq_w[w] = 2;
            else if (freq_w[w] == 2) freq_w[w] = -1;
        }
        std::size_t result = 0;
        for (const auto& kv : freq_w){
            if (kv.second == 2) result++;
        }
        return result;
    }
};
