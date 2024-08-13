#include <set>
#include <vector>
#include <string>

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::set<std::string> morse_codes;
        const static std::vector<std::string> codes = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        std::string morse_code;
        for (const std::string& word : words) {
            morse_code = "";
            for (const char& c : word) {
                morse_code += codes[c - 'a'];
            }
            morse_codes.insert(morse_code);
        }
        return morse_codes.size();
    }
};
