class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int total_sum = arr[0]; 
        int curr_sum = arr[0];
        
        for(int i=1;i<n;i++){
            curr_sum = max(arr[i] , arr[i] + curr_sum);
            total_sum = max(curr_sum, total_sum);
        }
        return total_sum;
    }
};