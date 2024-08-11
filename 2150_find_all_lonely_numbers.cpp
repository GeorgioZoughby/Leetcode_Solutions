// Author: Georgio Zoughby

#include <set>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findLonely(std::vector<int>& nums) {
        std::unordered_map<int, int> occurrences;
        for (const int &elt : nums) occurrences[elt]++;
        std::set<int> res;
        for(const auto &kv : occurrences)
        {
            if (kv.second == 1 &&
                occurrences.find(kv.first - 1) == occurrences.end() && 
                occurrences.find(kv.first + 1) == occurrences.end()) {
                res.insert(kv.first);
            }
        }
        std::vector<int> res_vector(res.begin(), res.end());
        return res_vector;
    }
};
