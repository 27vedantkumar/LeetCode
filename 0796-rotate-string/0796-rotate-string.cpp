class Solution {
public:
    bool rotateString(string s, string goal) {
        string ss=s+s;
        if(s.length()!=goal.length()) return false;
            if(ss.contains(goal)) return true;
        return false;
    }
};