//overlapping intervals

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        stack<vector<int>> st;
        for (auto interval : arr) {
            if (st.empty() || st.top()[1] < interval[0]) {
                st.push(interval);
            } 
            else {
                st.top()[1] = max(st.top()[1], interval[1]);
            }
        }
        vector<vector<int>> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());

        return result;
    }
};
