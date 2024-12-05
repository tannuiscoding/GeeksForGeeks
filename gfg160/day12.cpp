//MaxSum subarray in circular manner

class Solution {
public:
    int circularSubarraySum(vector<int>& arr) {
        int n = arr.size();
        int maxSum = INT_MIN, currMax = 0;
        int totalSum = 0; 
        for (int i = 0; i < n; i++) {
            currMax += arr[i];
            maxSum = max(maxSum, currMax);
            if (currMax < 0) currMax = 0;
            totalSum += arr[i];
        }
        int minSum = INT_MAX, currMin = 0;
        for (int i = 0; i < n; i++) {
            currMin += arr[i];
            minSum = min(minSum, currMin);
            if (currMin > 0) currMin = 0;
        }
        if (totalSum == minSum) return maxSum;
        return max(maxSum, totalSum - minSum);
    }
};
