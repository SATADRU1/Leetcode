class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int maxWater = 0;
        
        while(i<j){
            int h = min(arr[i], arr[j]);
            int w = j - i;
            int area = w * h;
            maxWater = max(maxWater, area);
            
            if(arr[i] < arr[j])
                i++;
            else
                j--;
        }
        
        return maxWater;
    }
};