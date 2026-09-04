class Solution {
public:
    bool isValid(string s) {
        int n=s.length();

        stack<char>st;

        int i=0;

        if(s[0]=='(' || s[0]=='{' || s[0]=='['){
            st.push(s[0]);
        }
        else{
            return false;
        }

        i=1;
        while( i<n ){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                }
            else{
                if(st.empty()) return false;
                else if(s[i]==')' && st.top()!='(') return false;
                else if(s[i]==']' && st.top()!='[') return false;
                else if(s[i]=='}' && st.top()!='{') return false;

                st.pop();
            }
            i++;
        }

        return st.empty();
    }
};
