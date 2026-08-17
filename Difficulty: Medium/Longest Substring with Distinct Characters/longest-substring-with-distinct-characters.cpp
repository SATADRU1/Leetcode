class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_set<char>charSet;
        int n = s.length();
        int maxLength = 0;
        int left = 0;
        
        for(int right = 0;right<n;right++){
            while(charSet.find(s[right]) != charSet.end()){  //jodi element set e khuje pai remove korte hobe
                charSet.erase(s[left]);
                left++;
            }
            
            //notun element ta add korte hobe 
            charSet.insert(s[right]);
            maxLength = max(maxLength, right-left+1);
        }
        
        return maxLength;
    }
};
