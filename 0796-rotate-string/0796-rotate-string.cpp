class Solution {
public:
    bool rotateString(string s, string goal) {
        string ss=s+s;
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<ss.length();i++) {
            if(ss.contains(goal)) return true;
        }
        return false;
    }
};