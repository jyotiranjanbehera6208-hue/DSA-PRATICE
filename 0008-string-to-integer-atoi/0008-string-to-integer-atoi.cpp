class Solution {
public:
    int myAtoi(string s) {

        int n = s.size();
        int i = 0;
        int sign = 1;
        long long num = 0;

        // Skip leading spaces
        while(i < n && s[i] == ' ')
        {
            i++;
        }

        // Handle sign
        if(i < n && s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+')
        {
            i++;
        }

        // Read digits
        while(i < n && isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');

            // Overflow handling
            if(sign * num > INT_MAX)
                return INT_MAX;

            if(sign * num < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};

