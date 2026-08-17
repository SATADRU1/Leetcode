class Solution {
public:
    string reverseWords(string s) {
        //1. reverse the whole string
        reverse(s.begin(), s.end());

        int i = 0;
        int n = s.length();
        int l = 0 , r = 0;
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r] = s[i];
                r++;
                i++;
            }
            //space pele individual reverse kore debo
            if(l<r){
                reverse(s.begin()+l, s.begin()+r);
                s[r] = ' '; //reverse korrar por akta space alot korbo
                r++;
                l = r;
            }
            i++;
        }
        s = s.substr(0, r-1);
        return s;
    }
};