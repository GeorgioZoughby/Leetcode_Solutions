//Author: Georgio Zoughby

#include <vector>

class Solution {
	public:
		int removeElement(std::vector<int>& nums, int val) {
			std::size_t left = 0;
			for(int right = 0; right < nums.size(); ++right)
			{
				if (nums[right] != val)
				{
					nums[left] = nums[right];
					++left;
				}
			}
			return left;
		}
};
