class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(auto num : nums){
            if(check.count(num)){
                return true;
            }
            check.insert(num);
        }
        return false;
    }
};