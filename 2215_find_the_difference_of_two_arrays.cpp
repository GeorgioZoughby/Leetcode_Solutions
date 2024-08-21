//Author: Georgio Zoughby

#include <vector>
#include <set>

class Solution {
public:
	std::vector<std::vector<int>> findDifference(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::set<int> n1(nums1.begin(), nums1.end());
        std::set<int> n2(nums2.begin(), nums2.end());
        std::vector<int> diff1;
        std::vector<int> diff2;
        for (int elt : n1){
            if (n2.find(elt) == n2.end())
                diff1.push_back(elt);
        }
        for (int elt : n2){
            if (n1.find(elt) == n1.end())
                diff2.push_back(elt);
        }
        return {diff1, diff2};
        
    }
};
