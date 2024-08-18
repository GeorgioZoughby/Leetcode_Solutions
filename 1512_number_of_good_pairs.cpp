// Author: Georgio Zoughby
#include <unordered_map>
#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
       std::unordered_map<int, int> mp;
        int res = 0;
        for (const int &x : nums)
        {
            if (mp.find(x) != mp.end())
                res += mp[x];
            ++mp[x];
        }
        return res;
    }
};
