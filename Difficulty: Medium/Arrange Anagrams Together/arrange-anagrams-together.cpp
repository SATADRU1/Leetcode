class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        int n = arr.size();
        unordered_map<string, vector<string>>mp;
        vector<vector<string>>result;
        
        for(int i=0; i<n; i++){
            string temp = arr[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(arr[i]);
        }
        
        for(auto a : mp){
            result.push_back(a.second);
        }
        
        return result;
    }
};