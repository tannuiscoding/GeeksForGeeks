//first non repeating character

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> frequencyMap;
        for (char c : s) {
           frequencyMap[c]++;
        }
        for (char c : s) {
           if (frequencyMap[c] == 1) {
                return c;
        }
    }
    return '$';
    }
};
