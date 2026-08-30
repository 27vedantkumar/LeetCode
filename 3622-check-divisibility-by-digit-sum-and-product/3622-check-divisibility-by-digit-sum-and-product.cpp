class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int s=0;
        long long p=1;
        while(num!=0) {
            int d=num%10;
            s+=d;
            p*=d;
            num/=10;
        }
        if(n%(p+s)==0) return true;
        else return false;
    }
};