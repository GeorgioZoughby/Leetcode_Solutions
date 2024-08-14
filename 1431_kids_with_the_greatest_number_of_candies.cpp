#include <vector>

class Solution {
public:
	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int max = candies[0];
        for (const int& elt : candies)
        {
            if (elt > max ) max = elt;
        }
        std::vector<bool> results;
        for (int& elt : candies)
        {
            results.push_back(elt + extraCandies >= max);
        }
        return results;
    }
};
