class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int pm=nums[0];
        int pmi=-1;
        for(int i=0;i<k;i++){
            if(nums[i]>pm){
                pm=nums[i];
                pmi=i;
            }
        }
        vector<int>ans;
        ans.push_back(pm);

        for(int r=k;r<nums.size();r++){
            if(nums[r]>=pm){
                pm=nums[r];
                pmi=r;
            }
            if(r-k+1>pmi){
               int start=r-k+1;

               pm=nums[start];
               pmi=start;

               for(int i=start;i<=r;i++){
                if(nums[i]>pm){
                    pm=nums[i];
                    pmi=i;
                }
               }
            }

            ans.push_back(pm);
        }

        return ans;
    }
};
