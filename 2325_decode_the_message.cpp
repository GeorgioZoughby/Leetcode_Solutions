#include <string>
#include <unordered_map>

class Solution {
public:
    std::string decodeMessage(std::string key, std::string message) {
        char start = 'a';
        std::unordered_map<char, char> keyMap;
        for (const char& elt : key)
        {
            if (keyMap.find(elt) == keyMap.end() && elt != ' ')
            {
                keyMap[elt] = start;
                start++;
            }
        }
        std::string decodedMessage = "";
        for (const char& c : message)
        {
            if (c == ' ')
			{
				decodedMessage += ' ';
				continue;
			}
            else {
                decodedMessage += keyMap[c];
            }
        }
        return decodedMessage;
    }
};
