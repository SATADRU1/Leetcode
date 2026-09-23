class Solution {
public:
    int strStr(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        for(int i=0;i<=m-n;i++){     // aikhane m-n kora holo karon makimum jodi akta limit thake string er to purota itterrate kore ki hobe 
            for(int j=0;j<n;j++){
                if(s1[i+j] != s2[j])
                    break;
                if(j == n-1) // last element e ese gache aiber out of bound hoye jabe 
                    return i;
            }
        } 
        return -1; //kichub pawa jayni8
    }
};