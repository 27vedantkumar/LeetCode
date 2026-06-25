class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        int maxi=INT_MIN;
        int j=1;
        for(int i=n-1;i>0;i--) {
            maxi=max(maxi,arr[i]);
            ans[j]=maxi;
            j++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};