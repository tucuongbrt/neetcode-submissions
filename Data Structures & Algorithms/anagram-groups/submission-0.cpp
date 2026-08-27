class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ref;
        for(auto str : strs){
            string so = str;
            sort(so.begin(), so.end());
            ref[so].push_back(str);            
        }

        vector<vector<string>> results;
        for(auto result : ref){
            results.push_back(result.second);
        }
        return results;

    }
};
