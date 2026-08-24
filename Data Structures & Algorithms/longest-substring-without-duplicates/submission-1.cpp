class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=1;
        int ans=1;
        if(s.length()==0) return 0;
        unordered_map<char,int>freq;
        freq[s[i]]++;
        while(j<s.length() && i<j){
            freq[s[j]]++;
            while(freq[s[j]]>1 && i<j){
                freq[s[i]]--;
                i++;
                if(freq[s[i]]==0){
                    freq.erase(s[i]);
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }

         //ans=max(ans,j-i);
        return ans;
    }
};
