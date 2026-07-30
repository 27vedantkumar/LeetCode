class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        if (i == n)
            return 0;

        bool neg = false;

        if (s[i] == '-') {
            neg = true;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        long long ans = 0;

        while (i < n) {
            char ch = s[i];

            if (ch >= '0' && ch <= '9') {
                int digit = ch - '0';
                ans = ans * 10 + digit;

                if (neg) {
                    long long check = -ans;
                    if (check < INT_MIN)
                        return INT_MIN;
                } else {
                    if (ans > INT_MAX)
                        return INT_MAX;
                }
            } else {
                break;
            }

            i++;
        }

        if (neg)
            ans = -ans;

        return (int)ans;
    }
};