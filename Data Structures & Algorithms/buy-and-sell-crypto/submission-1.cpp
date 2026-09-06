class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res =0;
        for(int i=0; i<prices.size();i++){
            for(int j =i+1; j<prices.size();j++){
                int profit=prices[j] - prices[i];
                res=max(res,profit);
            }
        }
        return res;
    }
};
