class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for (const int& elt : nums) freq[elt]++;
        int res = -1;
        int max = 0;
        for (auto& kv : freq)
        {
            if (kv.first % 2 == 0)
            {
                if (kv.second > max)
                {
                    max = kv.second;
                    res = kv.first;
                }
                else if (kv.second == max && kv.first < res){
                    res = kv.first;
                }
            }
        }
    return res;
    }
};
