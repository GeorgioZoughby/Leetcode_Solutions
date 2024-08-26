// Author: Georgio Zoughby
#include <string>
#include <unordered_set>

class Solution {
public:
    int minimizedStringLength(std::string s) {
        std::unordered_set<char> st;
        for (const char elt : s) st.insert(elt);
        return st.size();
    }
};
