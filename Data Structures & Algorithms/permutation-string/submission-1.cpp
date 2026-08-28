class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0), win(26,0);

        if(s1.length()>s2.length()) return false;

        for(char c : s1)
            freq1[c-'a']++;

        for(int i=0;i<s1.size();i++)
            win[s2[i]-'a']++;

        if(freq1 == win) return true;

        for(int i=s1.size(); i<s2.size(); i++) {
            win[s2[i]-'a']++;              
            win[s2[i-s1.size()]-'a']--;    

            if(freq1 == win)
                return true;
        }

        return false;
    }
};
