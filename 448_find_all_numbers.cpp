// Author: Georgio Zoughby

#include <vector>
#include <map>


class Solution {
public:
	std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::map<int, int> mp;
        for (const int& elt : nums)
            ++mp[elt];
        std::vector<int> res;
        for (int i = 1; i < nums.size() + 1; ++i){
            if (mp.find(i) == mp.end())
                res.push_back(i);
        }
        return res;
    }
};
