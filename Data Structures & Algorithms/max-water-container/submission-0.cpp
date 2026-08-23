class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;

        int ans=0;
        while(i<j){
            int l=j-i;
            int b=min(heights[i],heights[j]);
            int c=l*b;
            ans=max(ans,c);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                 j--;
            }
        }

        return ans;
    }
};
