//maximum product subarrary

class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        long long maxProd = arr[0], minProd = arr[0], ans = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < 0) {
                swap(maxProd, minProd);
            }
            maxProd = max((long long)arr[i], maxProd * arr[i]);
            minProd = min((long long)arr[i], minProd * arr[i]);
            ans = max(ans, maxProd);
        }
        return ans;
    }
};
