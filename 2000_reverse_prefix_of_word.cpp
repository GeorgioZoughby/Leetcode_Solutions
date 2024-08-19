// Author: Georgio Zoughby
#include <iostream>
#include <string>

class Solution {
public:
    std::string reversePrefix(std::string word, char ch) {
        int right = word.find(ch);
        int left = 0;
        while (left < right)
        {
            std::swap(word[left], word[right]);
            ++left;
            --right;
        }
        return word;
    }
    /*Method 2:
    std::string reversePrefix(std::string word, char ch) {
        int index = word.find(ch);
        if (index != std::string::npos)
            return std::reverse(words.begin() , words.begin() + index + 1);
    }
    */
};
