class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word12="";
        int m=word1.size();
        int n=word2.size();
        int i=0,j=0;
        while(i<m &&j<n) {
            word12+=word1[i];
            word12+=word2[j];
            i++;
            j++;
        }
        while(i<m) {
            word12+=word1[i];
            i++;
        }
        while(j<n) {
            word12+=word2[j];
            j++;
        }
        return word12;
    }
};