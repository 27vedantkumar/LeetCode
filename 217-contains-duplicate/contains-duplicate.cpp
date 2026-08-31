class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> boom;

        for(int t:nums) {
            if(boom.count(t)) return true;
            boom.insert(t);
        }
        return false;
    }
};