// Author: Georgio Zoughby

#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> st;
        int l = 0;
        int maxLength = 0;

        for (int r = 0; r < s.length(); ++r) {
            while (st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                ++l;
            }
            st.insert(s[r]);
            maxLength = std::max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};

