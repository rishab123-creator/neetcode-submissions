class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cz=0,co=0,ct=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) cz++;
            else if(nums[i]==1) co++;
            else ct++;
        }
        int j=0;
        while(cz--){
            nums[j++]=0;
        }
        while(co--){
            nums[j++]=1;
        }
        while(ct--){
            nums[j++]=2;
        }
    }
};