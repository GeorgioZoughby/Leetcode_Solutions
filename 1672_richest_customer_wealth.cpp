
#include <vector>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int result = 0;
        for (const std::vector<int>& customer : accounts)
        {
            int totalAmount = 0;
            for (const int& bank : customer)
            {
                totalAmount += bank;
            }
            if (totalAmount > result) result = totalAmount;
        }
        return result;
    }
};
