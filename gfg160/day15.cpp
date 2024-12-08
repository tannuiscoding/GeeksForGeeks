//add binary strings

class Solution {
public:
    string addBinary(string& s1, string& s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 < n2) {
            s1 = string(n2 - n1, '0') + s1; 
        } else if (n2 < n1) {
            s2 = string(n1 - n2, '0') + s2;
        }

        string result = ""; 
        int carry = 0;      

        for (int i = s1.size() - 1; i >= 0; --i) {
            int bit1 = s1[i] - '0'; 
            int bit2 = s2[i] - '0'; 
            int sum = bit1 + bit2 + carry;
            result += (sum % 2) + '0'; 
            carry = sum / 2;          
        }

        if (carry) {
            result += '1';
        }

        reverse(result.begin(), result.end());

        size_t pos = result.find_first_not_of('0');
        if (pos != string::npos) {
            result = result.substr(pos);
        } else {
            result = "0"; 
        }

        return result; 
    }
};
