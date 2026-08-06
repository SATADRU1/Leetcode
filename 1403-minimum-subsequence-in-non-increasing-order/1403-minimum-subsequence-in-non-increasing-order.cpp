class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend()); // normal sort tha asc te hoy dsc te orrar jonno rbegin , r end (r= reverse).

        int total_sum = 0;
        for(int i=0; i<n; i++){
            total_sum = total_sum + nums[i];
        }

        vector<int>result;
        int current_sum = 0;
        for(int i=0;i<n;i++){
            current_sum = current_sum + nums[i];
            result.push_back(nums[i]);

            if (current_sum > (total_sum - current_sum))
                return result;
        }
        return result;
        
    }
};