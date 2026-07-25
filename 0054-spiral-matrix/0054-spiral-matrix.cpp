class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(); //row
        int m = matrix[0].size(); //col

        int top = 0;
        int down = n-1;
        int left = 0;
        int right = m-1;
        int dir = 0;

        vector<int>result;
        while(left <= right && top <= down){
            if(dir == 0){
                for(int i=left;i <=right; i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir == 1){
                for(int i=top;i <=down; i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir == 2){
                for(int i=right;i >=left; i--){
                    result.push_back(matrix[down][i]);
                }
                down--;
            }
            if(dir == 3){
                for(int i=down;i >=top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
            if(dir==4){
                dir = 0;
            }
        }
        return result;
    }
};