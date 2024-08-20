// Author: Georgio Zoughby
#include <vector>
#include <unordered_map>

class Solution {
public:
	std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        std::vector<int> result;
        for (const int &elt : nums)
            mp[elt]++;
        for (const auto&[elt, count] : mp){
            if (count == 2) result.push_back(elt);
        }
        return result;
    }
};
