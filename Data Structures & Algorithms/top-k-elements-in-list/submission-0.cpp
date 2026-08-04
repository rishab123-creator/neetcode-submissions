class Solution {
public:

    static bool compare(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second) return a.first<b.first;

        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>freq;
        for(int x:nums) freq[x]++;

        vector<pair<int,int>>v(freq.begin(),freq.end());

        sort(v.begin(),v.end(),compare);

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
