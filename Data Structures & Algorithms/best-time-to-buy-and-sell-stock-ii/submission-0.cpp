class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return rec(prices,dp, 0, 0);
    }

private:
    int rec(vector<int>& prices,vector<vector<int>>& dp, int i, int bought) {
        if (i == prices.size()) {
            return 0;
        }
        
        if(dp[i][bought]!=-1){
            return dp[i][bought];
        }

        int res = rec(prices,dp, i + 1, bought);
        if (bought) {
            res = max(res, prices[i] + rec(prices,dp, i + 1, 0));
        } else {
            res = max(res, -prices[i] + rec(prices,dp, i + 1, 1));
        }
        return dp[i][bought]= res;
    }
};