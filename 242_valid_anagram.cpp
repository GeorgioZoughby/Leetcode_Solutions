#include <unordered_map>
#include <string>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
			if (t.length() != s.length())
				return false;
			std::unordered_map<char, int> l_count;
			for (const char &elt : s)
				l_count[elt]++;
			for (const char &elt : t)
				l_count[elt]--;
			for (auto &kv : l_count)
			{
				if (kv.second != 0)
					return false;
			}
			return true;
    }
};
