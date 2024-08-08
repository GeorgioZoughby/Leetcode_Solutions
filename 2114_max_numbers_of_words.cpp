// Author: Georgio Zoughby

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for (int i = 0; i < sentences.size(); ++i){
        int word = 0;
            for (const char& c : sentences[i])
            {
                if (c == ' ') word++;
            }
        word++;
        if (word > max) max = word;
        }
        return max;
    }
};
