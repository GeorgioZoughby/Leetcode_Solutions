// Author: Georgio Zoughby

#include <vector>

class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i += 2)
            std::swap(nums[i], nums[i + 1]);
        return nums;
    }
};
