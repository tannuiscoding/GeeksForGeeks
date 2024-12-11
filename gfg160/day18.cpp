//search the pattern in an string

class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        vector<int> indices;
        int n = txt.size();
        int m = pat.size();
        vector<int> lps(m, 0);
        int len = 0; 
        int i = 1;
        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        i = 0; 
        int j = 0; 
        while (i < n) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }
                        if (j == m) {
                indices.push_back(i - j); 
                j = lps[j - 1];
            } else if (i < n && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return indices;
    }
};
