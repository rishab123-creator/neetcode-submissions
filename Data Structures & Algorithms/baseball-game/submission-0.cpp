class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(string s:operations){
            if(s=="D"){
                st.push(2*st.top());
            }
            else if(s=="C"){
                st.pop();
            }
            else if(s=="+"){
                int f=st.top();
                st.pop();

                int s=st.top();

                st.push(f);
                st.push(f+s);


            }
            else{
                int n=stoi(s);
                st.push(n);
            }
        }

        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        return ans;
    }
};