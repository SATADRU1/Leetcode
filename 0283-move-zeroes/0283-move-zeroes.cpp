class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != 0)
                swap(nums[position++], nums[i]);
        }
    }
};