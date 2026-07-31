class Solution {
    int n;
    int t[2501][2501];
    int solve(vector<int>& nums, int i, int p){
        if(i>=n)
            return 0;
        if(p!=-1 && t[i][p]!=-1)
            return t[i][p];
        int take = 0;
        if(p==-1 || nums[p] < nums[i]){
            take = 1 + solve(nums, i+1, i);// i+1 holo move forward , ar i holo notun previous no jeta select kora hoyeche 
        }    
        int skip = solve(nums, i+1, p);  //ai khane p change hoye i holo na karon aikhane skip korechi to prev no change howar baper nei 
        if(p!=-1)
            t[i][p] = max(take, skip);
        
        return max(take, skip);
    } 
public:
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(nums , 0, -1);
    }
};