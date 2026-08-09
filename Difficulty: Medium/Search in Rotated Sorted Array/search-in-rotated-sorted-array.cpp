class Solution {
  public:
  
    int findPivot(vector<int>& arr, int n){
        int l=0, r=n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            
            if(arr[mid] > arr[r])
                l=mid+1;
            else
                r=mid;
        }
        return r;
    }
  
  
    int binarySearch(int l, int r, vector<int>& arr, int key){
        int idx = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(arr[mid] == key)
                return mid;
            else if(arr[mid] < key)
                l=mid+1;
            else
                r=mid-1;
        }
        return idx;
    }
  
  
    int search(vector<int>& arr, int key) {
        // Code Here
        int n = arr.size();
        int pivot = findPivot(arr, n);
        int idx = binarySearch(0, pivot-1, arr, key);
        
        if(idx != -1)
            return idx;
        
        idx = binarySearch(pivot, n-1, arr, key); 
        
        return idx;
    }
};