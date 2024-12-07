//reverse the array

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int right = arr.size()-1;
        int left=0;
        while(left<right){
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
};