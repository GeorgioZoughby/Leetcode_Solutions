// Author: Georgio Zoughby

#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> mp;
        for (std::string& str : strs)
        {
            std::string original = str;
            std::sort(str.begin(), str.end());
            mp[str].push_back(original);
        }
        for (auto& [key, value] : mp) 
					result.push_back(value);
        return result;
    }
};
