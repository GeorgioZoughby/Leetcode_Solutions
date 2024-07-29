#include <vector>
#include <string>

class Solution {
public:
    int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
			int count = 0;
			for (std::vector<std::string> &item : items)
			{
				if (ruleKey == "type" && ruleValue == item[0])
					count++;
				else if (ruleKey == "color" && ruleValue == item[1])
					count++;
				else if (ruleKey == "name" && ruleValue == item[2])
					count++;
    	}
			return count;
}
};
