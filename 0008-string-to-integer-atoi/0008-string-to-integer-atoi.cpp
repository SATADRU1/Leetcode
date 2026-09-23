class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        int sign = 1;
        int n = s.length();
        int i = 0;

        //white space remove
        while(i < n && s[i] == ' '){
            i++;
        }

        //optimal sign 
        if(i < n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        // process digit 
        while(i < n && s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';

            //control overflow and underflow
            if(result > INT_MAX/10 || (result == INT_MAX/10) && digit > INT_MAX % 10){
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign ;
    }
};