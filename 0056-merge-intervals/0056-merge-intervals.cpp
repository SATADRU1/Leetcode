class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(begin(intervals), end(intervals));
        vector<vector<int>>result;

        result.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0] <= result.back()[1])
                result.back()[1] = max(intervals[i][1] , result.back()[1]); // checking the last element caz first element already sorted due to sortintg in first
            else    
                result.push_back(intervals[i]);
        }

        return result;
    }
};