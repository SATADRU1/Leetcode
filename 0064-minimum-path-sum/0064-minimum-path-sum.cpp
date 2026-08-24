class Solution {
public:
    vector<vector<int>>t;

    int solve(vector<vector<int>>& grid, int i, int j, int m, int n){
        if(i==m-1 && j==n-1) // already pouche gechi
            return grid[i][j];
        
        if(t[i][j] != -1)
            return t[i][j]; 

        if(i==m-1) // can go only right
            return t[i][j] = grid[i][j] + solve(grid, i, j+1, m, n); //row still col change
        else if(j==n-1)  //can go only down 
            return t[i][j] = grid[i][j] + solve(grid, i+1, j, m, n);   // row change col still
        else
            return t[i][j] = grid[i][j] + min(solve(grid, i+1, j, m, n), solve(grid, i, j+1, m, n));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        t.resize(m+1, vector<int>(n+1, -1));
        return solve(grid, 0, 0, m, n);
    }
};