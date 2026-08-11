class Solution {
  public:
  
    int m, n;
    int t[1001][1001];
    
    int solve(string& s1, string& s2, int i, int j ){
        if(i==m) //s1 out of bound 
            return n-j; // insret 
        
        if(j==n) //s2 out of bound 
            return m-i; //deletion 
        if(t[i][j] != -1)
            return t[i][j];
        
        if(s1[i] == s2[j])
            return t[i][j] = solve(s1, s2, i+1, j+1);
        else{
            int insert = 1 + solve(s1, s2, i, j+1);
            int deleteC = 1 + solve(s1, s2, i+1, j);
            int replace = 1 + solve(s1, s2, i+1, j+1);
            
            return t[i][j] = min({insert, deleteC, replace});
        }
            return -1;
    }
  
    int editDistance(string& s1, string& s2) {
        // code here
        m = s1.length();
        n = s2. length();
        memset(t, -1, sizeof(t));
        return solve(s1, s2, 0, 0);
    }
};