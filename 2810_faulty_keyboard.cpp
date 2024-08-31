// Author: Georgio Zoughby

#include <string>

class Solution {
public:

    std::string ReverseString(const std::string& str) {
        std::string reversed = "";
        for (const char& c : str)
            reversed = c + reversed;
        return reversed;
    }

    std::string finalString(std::string s) {
        std::string answer = "";
        for (const char& c : s)
            if (c == 'i')
                answer = ReverseString(answer);
            else
                answer += c;
        return answer;
    }
};
