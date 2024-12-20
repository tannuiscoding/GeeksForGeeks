//merge without extra space

class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int gap = (n + m + 1) / 2; 

        while (gap > 0) {
            int i = 0, j = gap;
            while (j < (n + m)) {
                int val1 = (i < n) ? a[i] : b[i - n];
                int val2 = (j < n) ? a[j] : b[j - n];

                if (val1 > val2) {
                    if (i < n && j < n) {
                        swap(a[i], a[j]);
                    } else if (i < n && j >= n) {
                        swap(a[i], b[j - n]);
                    } else {
                        swap(b[i - n], b[j - n]); 
                    }
                }
                i++;
                j++;
            }
            if (gap == 1) break; 
            gap = (gap + 1) / 2; 
        }
    }
};
