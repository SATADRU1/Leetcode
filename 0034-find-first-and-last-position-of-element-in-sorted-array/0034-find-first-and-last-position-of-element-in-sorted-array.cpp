class Solution {
public:
    int findRight(vector<int>& nums, int target, int n){
        int l=0; 
        int r=n-1;
        int right_most = -1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                right_most = mid; //hote pare noyto aro left e itterate kore dekha uchit 
                l = mid + 1;
            } else if(nums[mid] < target )
                l = mid +1;
            else
                r = mid -1;
        }
        return right_most;
    }   


    int findLeft(vector<int>& nums, int target, int n){
        int l=0;
        int r=n-1;
        int left_most = -1;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target){
                left_most = mid; //hote pare noyto aro left e itterate kore dekha uchit 
                r = mid - 1;
            } else if(nums[mid] < target )
                l = mid +1;
            else
                r = mid -1;
        }
        return left_most;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left_most = findLeft(nums, target, n);
        int right_most = findRight(nums, target, n);

        return {left_most, right_most};
    }
};