class Solution {
public:
    string addBinary(string a, string b) {
        
        int m = a.length() - 1; //aita kora holo karon last theke suru hocche tai
        int n = b.length() - 1;

        string result = "";

        int sum = 0;
        int carry = 0;

        while(m>=0 || n>=0){

            sum = carry;
            if(m>=0){
                sum += a[m] - '0'; //charecter to interger
                m--;
            }

            if(n>=0){
                sum += b[n] - '0';
                n--;
            }

            result.push_back((sum %2==0) ? '0' : '1');
            carry = (sum > 1)? 1 : 0;
        }

        if(carry == 1)
            result.push_back('1');

        reverse(result.begin(), result.end());
        return result;
    }
};