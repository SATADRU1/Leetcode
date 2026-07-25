class Solution {
public:
    bool isAnagram(string s, string t) {
      int m = s.size();
      int n = t.size();

      if(m != n)
        return false;
    
    int count[26] = {0};
    for(int i = 0; i<n; i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i] != 0){
            return false;
        }
    }
    
        return true;
    }
};