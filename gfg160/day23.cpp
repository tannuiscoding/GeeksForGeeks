class Solution {
  public:
    // Function to count inversions in the array
    int mergeAndCount(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1, n2 = r - m;
        vector<int> left(n1), right(n2);
        for (int i = 0; i < n1; i++)
            left[i] = arr[i + l];
        for (int j = 0; j < n2; j++)
            right[j] = arr[m + 1 + j];
        int res = 0; 
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k++] = left[i++];
            } else {
                arr[k++] = right[j++];
                res += (n1 - i); 
            }
        }
        while (i < n1)
            arr[k++] = left[i++];
        while (j < n2)
            arr[k++] = right[j++];

        return res;
    }

    int mergeSortAndCount(vector<int>& arr, int l, int r) {
        int res = 0;
        if (l < r) {
            int m = l + (r - l) / 2;
            res += mergeSortAndCount(arr, l, m);
            res += mergeSortAndCount(arr, m + 1, r);
            res += mergeAndCount(arr, l, m, r);
        }
        return res;
    }

    int inversionCount(vector<int>& arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
