//allocating books
bool isPossible(const vector<int>& arr, int k, int maxPages) {
    int studentCount = 1;
    int currentSum = 0;
    
    for (int pages : arr) {
        if (currentSum + pages > maxPages) {
            studentCount++;
            currentSum = pages;
            if (studentCount > k) {
                return false;
            }
        } else {
            currentSum += pages;
        }
    }
    return true;
}

class Solution {
  public:
    int findPages(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return -1;
        
        int lo = *max_element(arr.begin(), arr.end());
        int hi = accumulate(arr.begin(), arr.end(), 0);
        
        int result = -1;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (isPossible(arr, k, mid)) {
                result = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        return result;
    }
};
