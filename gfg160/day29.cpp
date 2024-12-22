//lowest in a sorted and rotated array

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int low = 0, high = arr.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid > 0 && arr[mid] < arr[mid - 1])
                return arr[mid];
            if (arr[mid] > arr[mid + 1])
                return arr[mid + 1];
            if (arr[mid] > arr[high])
                low = mid + 1;
            else
                high = mid - 1;
            }
    return arr[low]; 
    }
};
