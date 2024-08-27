// Author: Georgio Zoughby

#include <set>
#include <vector>

class Solution {
	
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::set<int> st;
        for (const int num : nums) st.insert(num);
        int res = 0, count = 0;
        for (auto it = st.begin(); it != st.end(); ++it)
        {
            if (st.find(*it - 1) == st.end())
            {
                if (count > res) res = count;
                count = 0;
            }
                count++;
        }
        return res > count ? res : count;
    }
};
