// Author: Georgio Zoughby

#include <vector>
#include <unordered_set>
#include <unordered_map>


class Solution {
public:
    std::vector<int> findingUsersActiveMinutes(std::vector<std::vector<int>>& logs, int k) {
        std::unordered_map<int, std::unordered_set<int>> mp;
        for (const std::vector<int>& log : logs) {
            mp[log[0]].insert(log[1]);
        }
        std::vector<int> res(k, 0);
        for (const auto& [key, value] : mp)
        {
            res[value.size() - 1]++;
        }
        return res;
    }
};
