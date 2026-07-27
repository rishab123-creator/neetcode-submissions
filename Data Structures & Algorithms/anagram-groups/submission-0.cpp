class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string ,vector<string>>mapi;
        for(string s:strs){

           string key=s;
           sort(key.begin(),key.end());
           mapi[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &it:mapi){
            ans.push_back(it.second);
        }

        return ans;
    }
};
