class Solution {
    int n;
    vector<vector<int>>t;
    int solve(vector<int>& coins,int i, int amount){
        if(amount == 0)
            return 0;
        if(i>=n) //out of bound
            return INT_MAX;


        if(t[i][amount]!=-1)
            return t[i][amount];
        int take = INT_MAX;
        if(coins[i] <= amount ){
            int res = solve(coins, i, amount - coins[i]);  
            if(res !=INT_MAX)
                take = 1 + res; //here 1+ karon coin tola holo akta ...jeta newa hobe setar jonno 1 + kora holo
        }
        int skip = solve(coins, i+1 , amount);

        return t[i][amount] = min(take, skip);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        t.resize(n, vector<int>(amount + 1, -1));
        int ans = solve(coins, 0 , amount);
        return ans == INT_MAX? -1 : ans;
    }
};