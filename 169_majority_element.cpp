#include <vector>
#include <unordered_map>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
			std::unordered_map<int, int> occurences;
			for (int i = 0; i < nums.size(); ++i)
			{
				occurences[nums[i]]++;
			}
		for (auto &kv : occurences)
		{
			if (kv.second > nums.size() / 2)
				return kv.first;
    }
		return -1;
		}
};
