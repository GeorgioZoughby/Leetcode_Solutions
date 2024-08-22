// Author: Georgio Zoughby
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> mp1;
        std::unordered_map<int, int> mp2;
        for (const int elt : nums1) mp1[elt]++;
        for (const int elt : nums2) mp2[elt]++;
        int result1 = 0, result2 = 0;
        for (int i = 0; i < nums1.size(); ++i)
        {
            if (mp2[nums1[i]] > 0) ++result1;
        }
        for (int i = 0; i < nums2.size(); ++i)
        {
            if (mp1[nums2[i]] > 0) ++result2;
        }
        return { result1, result2 };
    }
};
