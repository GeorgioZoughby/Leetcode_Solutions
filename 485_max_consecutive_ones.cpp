#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
       bool start_count = false; 
			 std::size_t count = 0;
			 std::size_t max = 0;
			 for (int &elt : nums)
			 {
				if (elt == 1)
				{
					start_count = true;
				  count++;
				}
				else
				{
					if (count > max) max = count;
					count = 0;
					start_count = false;
    		    }
             }
        return (count > max ? count : max);
    }
};

