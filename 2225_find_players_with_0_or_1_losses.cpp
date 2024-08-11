// Author: Georgio Zoughby
#include <vector>
#include <map>
#include <set>

class Solution {
public:
    std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches) {
			std::map<int, int> losers;
        for (const std::vector<int> &match : matches){
            losers[match[1]]++;
        }
        std::vector<std::vector<int>> answer;
        std::set<int> one_loss;
        std::set<int> no_loss;
        for (const auto& kv : losers){
            if (kv.second == 1) one_loss.insert(kv.first);
        }
        for (const std::vector<int> &match : matches){
            if (losers[match[0]] == 0 )
            no_loss.insert(match[0]);
        }
        std::vector<int> no_loss_vector(no_loss.begin(), no_loss.end());
        std::vector<int> one_loss_vector(one_loss.begin(), one_loss.end());

        answer.push_back(no_loss_vector);
        answer.push_back(one_loss_vector);
        return answer;
        
    }
};
