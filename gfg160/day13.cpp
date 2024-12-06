//Smallest positive missing number

class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
    
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
        for (int i = j; i < n; i++) {
            int num = abs(arr[i]);
            if (num - 1 + j < n && arr[num - 1 + j] > 0) {
                arr[num - 1 + j] = -arr[num - 1 + j];
            }
        }
        for (int i = j; i < n; i++) {
            if (arr[i] > 0) {
                return i - j + 1;
            }
        }
        return n - j + 1;
    }
};
