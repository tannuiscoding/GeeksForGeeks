//min chars add to make palindrome

class Solution {
public:
    int minChar(string& s) {
        int n = s.size();
        string r = s;
        reverse(r.begin(), r.end());
        
        string concat = s + '#' + r;
        int m = concat.size();
 
        vector<int> lps(m, 0);
        for (int i = 1; i < m; ++i) {
            int j = lps[i - 1];
            while (j > 0 && concat[i] != concat[j]) {
                j = lps[j - 1];
            }
            if (concat[i] == concat[j]) {
                j++;
            }
            lps[i] = j;
        }
        int palindromeLength = lps[m - 1];
        return n - palindromeLength;
    }
};
