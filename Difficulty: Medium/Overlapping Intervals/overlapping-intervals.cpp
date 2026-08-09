class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        vector<vector<int>>result;
        
        result.push_back(arr[0]);
        for(int i=1; i<n;i++){
            if(arr[i][0] <= result.back()[1])
                result.back()[1] = max(arr[i][1], result.back()[1]);
            else
                result.push_back(arr[i]);
        }
        
        return result;
    }
};