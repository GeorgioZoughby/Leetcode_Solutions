#include <string>
#include <vector>

class Solution {
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs) {
			std::string result = "";
			std::size_t min_length = strs[0].length();
			for (const std::string& str : strs)
			{
				if (str.length() < min_length) min_length = str.length();
			}
			for (std::size_t i = 0; i < min_length; ++i)
			{
				char c = strs[0][i];
				for (const std::string& s : strs)
				{
					if (s[i] != c)
						return result;
				}
				result += c;
			}
			return result;
    }
};
