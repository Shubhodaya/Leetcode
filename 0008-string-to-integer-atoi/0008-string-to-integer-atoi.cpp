class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int ind = 0;
        
        // Skip leading whitespaces
        while (ind < n && s[ind] == ' ') ind++;
        
        if (ind == n) return 0;  // Only whitespaces
        
        // Handle sign
        int sign = 1;
        if (s[ind] == '+') {
            ind++;
        } else if (s[ind] == '-') {
            sign = -1;
            ind++;
        }
        
        long long result = 0;
        long long int_max = (1LL << 31) - 1;
        long long int_min = -(1LL << 31);
        
        // Convert the digits
        while (ind < n && isdigit(s[ind])) {
            result = result * 10 + (s[ind] - '0');
            
            // Check for overflow
            if (result * sign >= int_max) return int_max;
            if (result * sign <= int_min) return int_min;
            
            ind++;
        }
        
        return result * sign;
    }
};
