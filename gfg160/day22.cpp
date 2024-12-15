//find H-index

class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
    int n = citations.size();
    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (citations[i] >= n) {
            freq[n]++;
        } else {
            freq[citations[i]]++;
        }
    }
    int cumulative = 0;
    for (int i = n; i >= 0; i--) {
        cumulative += freq[i];
        if (cumulative >= i) {
            return i;
        }
    }
    return 0;
    }
};
