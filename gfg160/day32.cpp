//K-th Element of Merged Two Sorted Arrays

class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n = a.size(), m = b.size();
        int last = 0;
        int i = 0, j = 0;

        for (int d = 0; d < k; ++d) {
            if (i < n) {
                if (j < m && a[i] > b[j]) {
                    last = b[j];
                    j++;
                } else {
                    last = a[i];
                    i++;
                }
            } else if (j < m) {
                last = b[j];
                j++;
            }
        }
        
        return last;
    }
};
   
