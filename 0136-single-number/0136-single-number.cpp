class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_element=0;
        for (int x : nums) {
            unique_element ^= x;
        }
        return unique_element;
    }
    
};