class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int b=prices[0];
        for(int p:prices){
            b=min(b,p);
            if(b<p){
                ans=max(ans,p-b);
            }
        }

        return ans;
    }
};
