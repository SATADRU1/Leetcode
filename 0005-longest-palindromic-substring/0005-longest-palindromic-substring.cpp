class Solution {
public:

    int t[1001][1001];
    bool palindrom(string &s, int i, int j){
        if(i>=j)
            return 1;  // in bool true == 1 and false == 0
        if(t[i][j] != -1)
            return t[i][j];

        if(s[i] != s[j])   
            return t[i][j] = 0;
        
        return t[i][j] = palindrom(s, i+1, j-1);
    }

    string longestPalindrome(string s) {
        int maxLen = INT_MIN;
        int sp = 0;
        int n = s.length();
        memset(t, -1, sizeof(t));

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(palindrom(s,i,j) == true){
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