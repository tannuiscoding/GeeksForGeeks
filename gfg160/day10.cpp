//Kadane's algorithm
//maxsum subarray

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int max=INT_MIN;
        int currSum=0;
        for(int i=0; i<arr.size();i++){
            currSum=currSum+arr[i];
            if(currSum>max){
                max=currSum;
            }
            if(currSum<0){
                currSum=0;
            }
        }
        return max;
    }
};
