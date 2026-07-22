class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        map<int , int>mp;  //mp only show the sorted map and un orderd maps are unsorted
        for(int i=0;i<n;i++){
            int rem = target - nums[i];

            if(mp.find(rem) != mp.end()){
                return {mp[rem] , i}; //index value of the nums
            }
            mp[nums[i]] = i;
        }
        return{};
    }
};