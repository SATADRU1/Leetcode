class Solution {
  public:
    int t[1001][1001];
    //pallindrom function 
        bool pallindrom(string &s, int i, int j){
            if(i>=j)
                return 1;
            
            if(t[i][j] != -1)
                return t[i][j];
            
            if(s[i] != s[j])
                return t[i][j] = 0;
            
            return t[i][j] = pallindrom(s, i+1, j-1);
        }
  
    string getLongestPal(string &s) {
        // code here for finding largest substring
        int n = s.length();
        memset(t, -1, sizeof(t));
        int maxLen = INT_MIN ;
        int sp = 0; //starting point 
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n;j ++){
                if(pallindrom(s,i,j)==1){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp, maxLen);
    }
};