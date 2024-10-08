// Author: Georgio Zoughby
#include <vector>

class Solution {
public:
	std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> res;
        for (int i = 0; i < n; ++i)
        {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};
