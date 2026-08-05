class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //log(n) tc means bunary search
        //for coner case if(n <1) return -1 empty array

        int n = nums.size();
        int l = 0;
        int r = n-1;
        int i = 0;

        while(l<r){
            int mid = l + (r-l)/2;

            if(nums[mid] < nums[mid+1])
                l = mid+1;
            else
                r = mid;
        }
        return l;
    }
};