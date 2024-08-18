// Author: Georgio Zoughby
#include <vector>
#include <unordered_map>

using std::vector,std::unordered_map;
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        std::unordered_map<int, std::vector<int>> mp;
        for (int i = 0; i < groupSizes.size(); ++i)
            mp[groupSizes[i]].emplace_back(i);
        std::vector<std::vector<int>> results;
        for (auto& [groupSize, persons] : mp)
        {
            std::vector<int> group = {};
            group.reserve(groupSize);
            for (const int& person : persons)
            {
                group.emplace_back(person);
                if (group.size() == groupSize)
                {
                    results.emplace_back(group);
                    group.clear();
                }
            }
            /*
            for (int i = 0; i < persons.size(); i += groupSize)
            {
                results.emplace_back(persons.begin() + i, persons.begin() + i + groupSize);
            }*/
            //We can use this to directly construct the object            
        }
        return results;

    }
};
