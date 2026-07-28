class Solution {
    int m;
    int n;
    void dfs(vector<vector<char>>& grid , int i, int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0')
            return ;
        if(grid[i][j]=='$')
            return;
        grid[i][j] = '$';

        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int island =0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    dfs(grid , i ,j);
                    island++;
                }
            }
        }
        return island;
    }
};