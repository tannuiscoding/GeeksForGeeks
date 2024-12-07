//string to integer

class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int res=0;
        int sign=1;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign = -1;
            i++;
        }
        while(s[i]>='0' && s[i]<='9'){
            if (res > (INT_MAX - (s[i] - '0')) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            res=res*10 + (s[i]-'0');
            i++;
        }
        return res * sign;
    }
};
