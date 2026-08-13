class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        vector<int>pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }

        int ans=0;
        for(int j=0;j<n;j++){
            int sum=0;
            for(int i=j;i<n;i++){
                sum+=nums[i];
                if(sum==k) ans++;
            }
        }

        return ans;
    }
};