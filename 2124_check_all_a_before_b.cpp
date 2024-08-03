#include <string>

class Solution {
public:
    bool checkString(std::string s) {
				bool found_b = false;
				for (const char& c : s)
				{
					if (c == 'b')
					{
						found_b = true;
					}
					if (found_b && c == 'a')
					{
						return false;
					}
    		}
				return true;
		}
};
