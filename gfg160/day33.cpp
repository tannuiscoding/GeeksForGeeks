//aggresive cows
class Solution {
  public:

    bool isFeasible(vector<int>& stalls, int k, int dist) {
        int count = 1;
        int last_position = stalls[0];
        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - last_position >= dist) {
                count++;
                last_position = stalls[i];
            }
            if (count == k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int low = 1;
        int high = stalls.back() - stalls.front();
        int result = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isFeasible(stalls, k, mid)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
};
