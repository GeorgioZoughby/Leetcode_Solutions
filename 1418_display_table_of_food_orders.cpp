#include <vector>
#include <string>
#include <set>
#include <map>

class Solution {
public:
    std::vector<std::vector<std::string>> displayTable(std::vector<std::vector<std::string>>& orders) {
        std::map<int, std::map<std::string, int>> mp;
        std::set<std::string> header;
        for (std::vector<std::string>& e : orders) {
            header.insert(e[2]);
            mp[stoi(e[1])][e[2]]++;
        }
        std::vector<std::string> header_final = { "Table" };
        for (auto it = header.begin(); it != header.end(); ++it) {
            header_final.push_back(*it);
        }
        std::vector<std::string> food_items(header_final.begin() + 1, header_final.end());
        std::vector<std::vector<std::string>> res;
        res.push_back(header_final);
        for (auto& kv : mp)
        {
            std::vector<std::string> orders_by_table;
            orders_by_table.push_back(std::to_string(kv.first));
            for (const auto& food_item : food_items) {
                    orders_by_table.push_back(std::to_string(kv.second[food_item]));
            }
            res.push_back(orders_by_table);
        }
        return res;
    }


};
