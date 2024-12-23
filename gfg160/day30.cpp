//binary search in rotated sorted array

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; 
            if(arr[mid]==key) return mid;
            if(arr[left]<=arr[mid]){
                if(key>=arr[left]&& key<arr[mid]){
                    right = mid-1;
                }
                else{
                    left =mid+1;
                }
            }
            else{
                if(key>arr[mid]&& key<=arr[right]){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
};
