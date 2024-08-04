#include <map>
#include <string>
#include <vector>

class Solution {
public:
	std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
		std::map<int, std::string> m;
			for (std::size_t i = 0; i < heights.size(); ++i)
			{
				m[heights[i]] = names[i];
			}
			std::vector<std::string> vec;
			for (auto it = m.rbegin(); it != m.rend(); ++it)
			{
        vec.push_back(it->second);
    	}
			return vec;
    }
};
