class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int cumSum = 0;
        for(int i =0;i<n;i++){
            int ls = cumSum;
            int rs = sum - ls - nums[i];

            if(ls == rs)
                return i;
            
            cumSum += nums[i];
        }
        return -1;
    }
};