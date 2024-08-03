// Author: Georgio Zoughby
#include <vector>
#include <set>

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        std::set<int> s(candyType.begin(), candyType.end());
        return (s.size() > candyType.size() / 2) ? candyType.size() / 2 : s.size();
    }
};
