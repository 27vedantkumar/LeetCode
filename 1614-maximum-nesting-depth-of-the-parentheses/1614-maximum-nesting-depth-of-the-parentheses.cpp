class Solution {
public:
    int maxDepth(string s) {
        int brackOn=0,ans=0;
        for(char &ch:s) {
            if(ch=='(') brackOn++;
            else if(ch==')') brackOn--;
            ans=max(ans,brackOn);
        }
        return ans;
    }
};