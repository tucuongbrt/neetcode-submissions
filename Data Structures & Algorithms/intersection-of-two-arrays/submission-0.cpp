class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;
        for(auto i : nums1){
            for(auto j : nums2){
                if(i==j){
                    res.insert(i);
                }
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};