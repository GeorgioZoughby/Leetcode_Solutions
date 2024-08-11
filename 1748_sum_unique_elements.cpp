#include <vector>
#include <unordered_map>
class Solution {
public:
    int sumOfUnique(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for (const int & e : nums)
        {
            freq[e]++;
        }
        int result = 0;
        for (const auto& kv : freq)
        {
            if (kv.second == 1)
			{
				result += kv.first;
			}
        }
        return result;
    }
};
