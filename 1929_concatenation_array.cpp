#include <vector>

class Solution {
public:
	std::vector<int> getConcatenation(std::vector<int>& nums) {
		std::vector<int> ans = nums;
		for (const int &elt : nums) ans.emplace_back(elt);
    return ans;
	}
};
