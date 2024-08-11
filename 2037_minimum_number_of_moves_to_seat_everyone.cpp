// Author: Georgio Zoughby
#include <vector>
#include <algorithm>

class Solution {
public:
	int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        int res = 0;
        for (int i = 0; i < students.size(); ++i){
            res += std::abs(students[i] - seats[i]);
        }
        return res;
    }
};
