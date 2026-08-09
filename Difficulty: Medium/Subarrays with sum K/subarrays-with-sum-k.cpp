class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int>mp;
        
        int result = 0;
        int cumSum = 0 ;
        mp.insert({0,1});
        
        for(int i=0;i<n;i++){
            cumSum += arr[i];
            
            if(mp.find(cumSum -k) != mp.end())
                result += mp[cumSum -k];
                
            mp[cumSum]++;
        }
        return result ;
    }
};