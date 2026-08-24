class Solution {
public:
    vector<vector<int>>t;
    int solve(int m, int n, int i, int j){
        if(i==m-1 && j==n-1)
            return 1; //ekta path peye gechi
        if(i<0 || i>=m || j<0 || j>=n)
            return 0;
        if(t[i][j] != -1)
            return t[i][j]; 

        int right = solve(m,n,i,j+1);
        int down = solve(m,n,i+1,j);

        return t[i][j] = right + down;
    }

    int uniquePaths(int m, int n) {
        t.resize(m+1, vector<int>(n+1, -1));
        return solve(m,n,0,0);
    }
};