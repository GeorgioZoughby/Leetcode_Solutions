// Author: Georgio Zoughby
#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string result;
        for (int i = 0; i < command.size(); ++i)
        {
            if (command[i] == '(' && command[i + 1] == ')')
            {
                result += 'o';
                i++;
            }
            else if (command[i] == 'G')
            {
                result += 'G';
            }
            else {
                result += "al";
                i += 3;
            }
        }
        return result;
    }
};
