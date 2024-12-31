class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
       int n=mat.size();
       
       for(int i=0; i<n; i++){
           for(int j=i; j<n-i-1; j++){
               int temp=mat[i][j];
               mat[i][j]=mat[j][n-1-i];
               mat[j][n-1-i]=mat[n-1-i][n-1-j];
               mat[n-1-i][n-1-j]=mat[n-1-j][i];
               mat[n-1-j][i]=temp;
           }
       }
    }
};
