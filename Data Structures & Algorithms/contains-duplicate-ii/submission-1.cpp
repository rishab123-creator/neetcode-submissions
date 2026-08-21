class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n=nums.size();
        if(n<=1) return false;
        //if(k<=1) return false;
        unordered_map<int,int>freq;
        
        for(int i=0;i<=k;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1) return true;
        }

        for(int i=k+1;i<n;i++){
            freq[nums[i-k-1]]--;
            freq[nums[i]]++;
            if(freq[nums[i]]>1) return true;
        }

        return false;
    }
};