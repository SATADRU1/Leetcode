class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zero = 0;
        int length = n-1;

        for(int i=0;i<=length-zero;i++){
            if(arr[i] == 0){
                //edge case - last element is zero
                if(i==length-zero){
                    arr[length] = 0;
                    length--;
                    break;
                }
                zero++;
            }
        }

        int last = length - zero;
        for(int i=last;i>=0;i--){
            if(arr[i]==0){
                arr[i+zero] = 0;
                zero--;
                arr[i+zero] = 0;
            } else 
                arr[i+zero] = arr[i];
        }
    }
};