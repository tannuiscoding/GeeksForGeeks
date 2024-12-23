class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=0; i<n; i++){
            int j=i;
            while(arr[j-1]>arr[j] && j>0){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }
};
