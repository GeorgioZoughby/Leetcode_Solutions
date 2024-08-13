#include <unordered_map>
#include <vector>

class Solution
{
	public:
		int countKDifference(std::vector<int>& nums, int k) {
			std::unordered_map<int, int> map;
			int count = 0;
			for (const int& elt : nums)
			{
				if (map.find(elt - k) != map.end())
				{
					count += map[elt - k];
				}
				if (map.find(elt + k) != map.end())
				{
					count += map[elt + k];
				}
				map[elt]++;
			}
			return count;
		}
};
