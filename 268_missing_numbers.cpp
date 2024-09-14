// Author: Georgio Zoughby
#include <vector>


class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
       /* std::map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) mp[i] = 0;
        for (const int& elt : nums) ++mp[elt];
        for (const auto& [key, val] : mp)
        {
            if (val == 0) return key;
        }
        return nums.size();
        */
        // optimized solution:
        int size = nums.size();
        int ssum = ((size + 1) * size) / 2;
        int sum = 0;
        for (int i = 0; i < size; ++i){
            sum += nums[i];
        }
        return ssum - sum;
    }
};
