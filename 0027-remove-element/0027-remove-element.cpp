class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] != val){ //jodi nums[i] == val hoto tahoel skip kore jetam tai
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};