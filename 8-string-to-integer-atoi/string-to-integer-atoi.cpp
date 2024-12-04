class Solution {
public:
     int myAtoi(string s) {
        if (s.length() == 0)
            return 0;

        int sign = 1, n = 0;
        long long int num = 0;

        for (int i = 0; i < s.length(); i++) {
            // Skip leading spaces
            if (s[i] == ' ' && n == 0) 
                continue;
            

            // If the sign has not been set yet
            if (s[i] == '-' && n == 0) {
                sign = -1;
                n = 1;
            }
            else if (s[i] == '+' && n == 0) {
                sign = 1;
                n = 1;
            }
            // If it's a digit
            else if (s[i] >= '0' && s[i] <= '9') {
                n = 1;
                num = num * 10 + (s[i] - '0');
                
                // Handle overflow
                if (num > INT_MAX) 
                    return sign == 1 ? INT_MAX : INT_MIN;
                
            }
            else 
                break;
            
        }

        // Final result
        return sign * num;
     }
};
