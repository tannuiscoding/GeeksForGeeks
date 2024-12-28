class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r){
        int i=l;
        int j=mid+1;
        vector<int> sorted;
        while(i<=mid && j<=r){
            if(arr[i]>arr[j]){
                sorted.push_back(arr[j]);
                j++;
            }
            else{
                sorted.push_back(arr[i]);
                i++;
            }
        }
         while(i<=mid){
                sorted.push_back(arr[i]);
                i++;
            }
        while(j<=r){
            sorted.push_back(arr[j]);
            j++;
        }
        for (int k = l; k <= r; k++) {
            arr[k] = sorted[k-l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        int mid=l+ (r-l)/2;
        if(l>=r) return;
        mergeSort(arr, l, mid);
        mergeSort(arr,mid+1, r);
        merge(arr,l, mid,r);
    }
};
