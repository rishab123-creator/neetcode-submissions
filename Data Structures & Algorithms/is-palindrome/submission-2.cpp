class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        
        int j=n-1;
        int i=0;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            else if(!isalnum(s[j])){
                j--;
                continue;
            }

            else if(tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};
