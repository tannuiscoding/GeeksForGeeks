//Minizing height difference
class Solution {
  public:
    void ssort(vector<int> &arr){
        for(int i=0;i<arr.size();i++){
            int min=i;
            for(int j=i+1; j<arr.size();j++){
                if(arr[min]>arr[j]) min=j;
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    int getMinDiff(vector<int> &arr, int k) {
        // code here
    ssort(arr);
    int n=arr.size();
    int res=arr[n-1]-arr[0];
    
    for(int i = 1; i<n; i++){
        if(arr[i]-k<0) continue;
        
        int minH=(arr[0]+k<arr[i]-k)?arr[0]+k:arr[i]-k;
        
        int maxH=(arr[n-1]-k>k+arr[i-1])?arr[n-1]-k:arr[i-1]+k;
        
        int diff = maxH-minH;
        if(res>diff) res=diff;
    }
    return res;
    }
};
