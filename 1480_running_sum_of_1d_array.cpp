
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};
