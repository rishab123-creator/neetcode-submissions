class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]={0};
        int l=0;
        int maxi=0;
        int ans=0;
        for(int r=0;r<s.length();r++){
            int x=s[r]-'A';
            count[x]++;
            maxi=max(maxi,count[x]);
            while((r-l+1)-maxi>k){
                count[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
