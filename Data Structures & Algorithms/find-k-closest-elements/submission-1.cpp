class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>diff(n);

        for(int i=0;i<arr.size();i++){
            diff[i]=abs(arr[i]-x);
        }

        int i=0;
        int j=arr.size()-1;

        while(j-i+1>k){
            if(diff[i]<diff[j]) j--;
            else if(diff[j]<diff[i]) i++;
            else{
                if(arr[i]<arr[j]) j--;
                else i++;
            }
        }

        vector<int>ans;
        for(int p=i;p<=j;p++) ans.push_back(arr[p]);

        return ans;
    }
};
