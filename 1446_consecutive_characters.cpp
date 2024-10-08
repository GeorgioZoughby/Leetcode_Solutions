class Solution {
public:
    int maxPower(string s) {
        int max = 0;
        int count = 1;
        for (int i = 0; i < s.length() - 1; ++i){
            if (s[i] == s[i + 1]) count++;
            else
            { 
                if (count > max)
                {
                max = count;
                }
                count = 1;
            }
        }
        return (max < count) ? count : max;
    }
};
