class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        n  = abs(n);
        string s = to_string(n);
        int a = s.size();
        int l = 0;
        int r = a-1;
        
        while(l<r){
            if(s[l] != s[r])
                return false;
            
            l++;
            r--;
        }
        return true;
    }
};