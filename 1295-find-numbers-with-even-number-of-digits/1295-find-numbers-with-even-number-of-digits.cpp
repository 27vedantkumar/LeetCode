class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++) {
            int tmp=nums[i];
            int c=0;
            while(tmp!=0) {
                int d=tmp%10;
                c++;
                tmp/=10;
            }
            if(c%2==0) count++;
        }
        return count;
    }
};