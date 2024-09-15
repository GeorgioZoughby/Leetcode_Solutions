// Author: Georgio Zoughby

#include <utility>
#include <vector>
#include <unordered_map>
#include <set>

class Solution {
	public:
		std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
			std::unordered_map<int, int>  freq;
			for (std::size_t i = 0; i < nums.size(); ++i)
				++freq[nums[i]];
			std::set<std::pair<int,int>> max;
			for (auto& [key, val] : freq)
				max.insert({val, key});
			std::vector<int> res(k);
			for (auto it = max.rbegin(); it != max.rend() && k != 0; ++it)
			{
				--k;
				res[k] = it->second;
			}
			return res;
		}
};
