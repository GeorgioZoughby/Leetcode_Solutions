#include <vector>

class Solution {
public:
    int minimumOperations(std::vector<int>& nums) {
        std::size_t n = nums.size();
        std::size_t res = 0;
        for (std::size_t i = 0; i < n; ++i)
        {
            if (nums[i] % 3 != 0)
            res++;
        }
        return res;
    }
};
