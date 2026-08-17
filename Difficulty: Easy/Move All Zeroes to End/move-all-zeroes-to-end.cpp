class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int pos = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] != 0)
                swap(arr[pos++], arr[i]);
        }
    }
};