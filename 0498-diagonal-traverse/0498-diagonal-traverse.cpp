class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        map<int, vector<int>>mp;
        vector<int>result;

        //fill the map
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }

        bool flip = true;
        for(auto &a : mp){
            if(flip){
                reverse(a.second.begin(), a.second.end());
            }

            for(int &num : a.second){
                result.push_back(num);
            }

            //for toggle
            flip =! flip;
        }
        return result;
    }
};