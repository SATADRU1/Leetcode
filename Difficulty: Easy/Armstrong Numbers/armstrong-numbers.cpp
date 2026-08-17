class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n;
        int original = n;
        int sum = 0;
        int total_digit = 0;
        
        while(temp > 0){
            total_digit++;
            temp /= 10;
        }
        
        temp = n;
        while(temp != 0){
            int digit = temp % 10;
            sum += round(pow(digit, total_digit));
            temp /= 10;
        }
        
        return sum == original;
    }
};