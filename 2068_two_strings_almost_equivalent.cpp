#include <string>
#include <vector>

class Solution {
public:
    bool checkAlmostEquivalent(std::string word1, std::string word2) {
      std::vector<int> freq(26);
			for (const char& c : word1)
			{
				freq[c - 'a']++;
			}
			for (const char& c : word2)
			{
				freq[c - 'a']--;
			}
			for (const int& count : freq)
			{
				if (std::abs(count) > 3) return false;
			}
			return true;
    }
};
