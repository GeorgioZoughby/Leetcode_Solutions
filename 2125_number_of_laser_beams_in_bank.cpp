// Author: Georgio Zoughby
//
#include <vector>
#include <string>


class Solution {
public:
    int numberOfBeams(std::vector<std::string>& bank) {
        int result = 0;
        int prev_count = 0;
        for (int i = 0; i < bank.size(); ++i)
        {
            int count = 0;
            for (char& elt : bank[i])
            {
                if (elt == '1') count++;
            }
            if (count > 0)
            {
                result += prev_count * count;
                prev_count = count;
            }
        }
        return result;
    }
};
