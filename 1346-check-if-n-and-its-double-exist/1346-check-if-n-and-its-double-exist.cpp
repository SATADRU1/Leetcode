class Solution {
public:

    int binerySearch(vector<int>& arr, int target){
        int n  = arr.size();
        int l = 0;
        int r = n-1;

        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] < target)
                l = mid+1;
            else 
                r = mid-1;
        }
        return -1;
    }

    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            int idx = binerySearch(arr, 2*arr[i]);

            if(idx != -1 && idx!=i)
                return true;
        }
        return false;
    }
};