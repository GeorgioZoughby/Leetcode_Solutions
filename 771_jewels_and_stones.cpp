#include <string>
#include <unordered_map>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
			std::unordered_map<char, int> occ;
			for (const char& c : stones) occ[c]++;
			int result = 0;	
			for (const char& c :jewels) result += occ[c];
			return result;
    }
};
