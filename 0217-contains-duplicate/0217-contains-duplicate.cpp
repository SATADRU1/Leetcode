class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;

        for(auto a : nums){
            if(mp.find(a) != mp.end())
                return true;

            mp.insert(a);
        }
        return false;
    }
};