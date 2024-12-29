//spiral matrix traversal

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        vector<int> result;
        int top = 0, bottom = mat.size() - 1;
        int left = 0, right = mat[0].size() - 1; 
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.push_back(mat[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                result.push_back(mat[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.push_back(mat[bottom][i]);
                }
                bottom--; 
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(mat[i][left]);
                }
                left++; 
            }
        }
        
        return result; 
    }
};
