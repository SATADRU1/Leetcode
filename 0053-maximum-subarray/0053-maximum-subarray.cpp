class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int total_max = nums[0];
        int curr_max = nums[0];

        for(int i=1;i<n;i++){
            curr_max = max(nums[i] , nums[i] + curr_max);
            total_max = max(curr_max , total_max);
        }

        return total_max;
    }
};