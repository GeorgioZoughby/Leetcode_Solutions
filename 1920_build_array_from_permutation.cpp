class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        std::vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            res.emplace_back(nums[nums[i]]);
        }
        return res;
    }
};
