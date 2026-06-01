class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long long num = 0;
        bool started = false;
        int minus = 1;

        for(int i = 0; i < n; i++) {

            if(!started && s[i] == ' ') {
                continue;
            }

            if(!started && s[i] == '-') {
                minus = -1;
                started = true;
                continue;
            }

            if(!started && s[i] == '+') {
                started = true;
                continue;
            }

            if(!started && !isdigit(s[i])) {
                return 0;
            }

            if(isdigit(s[i])) {
                num = 10 * num + (s[i] - '0');
                started = true;

                if(minus == 1 && num > INT_MAX) {
                    return INT_MAX;
                }

                if(minus == -1 && -num < INT_MIN) {
                    return INT_MIN;
                }
            }
            else {
                break;
            }
        }

        return num * minus;
    }
};