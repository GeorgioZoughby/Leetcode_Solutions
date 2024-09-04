// Author: Georgio Zoughby


#include <algorithm>
#include <vector>

class Solution {
public:
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
			std::vector<std::vector<int>> result;
			std::sort(nums.begin(), nums.end());
			int size = nums.size();
			for (int i = 0; i < size; ++i)
			{
				if (i > 0 && nums[i] == nums[i - 1]) continue;
				int left = 0, right = size - 1;
				while (left < right)
				{
					int sum3 = nums[i] + nums[left] + nums[right];
					if (sum3 == 0)
					{
						result.push_back({nums[i], nums[left], nums[right]});
						while (left < right && nums[left] == nums[left + 1]) ++left;
						while (left < right && nums[right] == nums[left + 1]) --right;
						++left;
						--right;
					}
					else if (sum3 < 0) ++left;
					else --right;
				}

			}
			return result;
		}
	};



