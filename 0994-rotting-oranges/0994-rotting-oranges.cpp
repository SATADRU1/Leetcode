class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    vector<vector<int>>direction{{1,0}, {-1,0}, {0,1}, {0,-1}};
    int m = grid.size();
    int n = grid[0].size();
    int FreshCount = 0;

    queue <pair<int , int>>que;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==2){
                que.push({i,j});
            }else if(grid[i][j] == 1){
                FreshCount++;
            }
        }
    }
    if(FreshCount==0){
        return 0;
    }
        int minute = 0;
        while(!que.empty()){
            int N = que.size();
            while(N--){
                auto it = que.front();
                que.pop();

                int i = it.first;
                int j = it.second;

                for(vector<int>dir : direction){ // have to study this 
                    int new_i = i + dir[0];
                    int new_j = j + dir[1];

                    if(new_i<0 || new_i>=m || new_j<0 || new_j >=n )
                        continue;
                    if(grid[new_i][new_j] != 1)
                        continue;
                        
                        grid[new_i][new_j] = 2;
                        que.push({new_i,new_j});
                        FreshCount--;
                }
            }
            minute++;
        }
        return FreshCount==0?(minute-1):-1;
    }
};