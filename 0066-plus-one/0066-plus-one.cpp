class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1; //maths style calculation start from LSB

        while(i >= 0){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits;
            }

            //if the last digit is 9 the digit of i shopuld be 0 
            digits[i] = 0;
            i--;
        }
        digits.insert(digits.begin(), 1); //carry 1 to the forward

        return digits;
    }
};