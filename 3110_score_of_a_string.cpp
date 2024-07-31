#include <string>

class Solution {
public:
    int scoreOfString(std::string s) {
        int output = 0;
    	for (std::size_t i = 0; i < s.length() - 1; ++i)
			{
				output += std::abs(s[i] - s[i + 1]);
			}
			return output;
		}
};
