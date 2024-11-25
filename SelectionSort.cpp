class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        for(int i=0; i<(arr.size()-1);i++){
            int min=i;
            for(int j=i+1; j<arr.size();j++){
                if(arr[min]>arr[j]) {
                    min = j;
                }
            }
         int temp=arr[min];
         arr[min]=arr[i];
         arr[i]=temp;
        }
    }
};
