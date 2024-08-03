// Author: Georgio Zoughby
#include <string>
#include <unordered_map>

class Solution {
public:
    int findPermutationDifference(std::string s, std::string t) {
      std::unordered_map<char,int> index;
			for (std::size_t i = 0; i < s.length(); ++i)
			{
				index[s[i]] += i;
				index[t[i]] += -i;
			}
			int result = 0;
			for (auto& kv : index)
			{
				result += std::abs(kv.second);
			}
			return result;
		}
};
