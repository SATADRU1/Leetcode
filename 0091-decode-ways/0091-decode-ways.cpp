class Solution {
public:
    int t[101];
    int solve(int i, string &s, int n){
        if(t[i] != -1)
            return t[i];
        if(i==n)
            return t[i] = 1; //akta valid split peye gechi
        if(s[i]=='0')
            return t[i] = 0; //i jodi 0 hoye jay then seta invalid 
        
        int only_ith_term = solve(i+1, s, n);

        int i_plus_one_and_ith_term = 0;
        if(i+1 < n){
            if(s[i] == '1' || s[i] == '2' && s[i+1] <= '6')
                i_plus_one_and_ith_term = solve(i+2, s, n);
        }

        return t[i] = i_plus_one_and_ith_term + only_ith_term ;

    }


    int numDecodings(string s) {
        int n = s.length();
        memset(t, -1, sizeof(t));
        return solve(0, s, n);
    }
};