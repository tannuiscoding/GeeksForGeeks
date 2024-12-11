//check if string are anagram

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.length() != s2.length()) return false;
            int freq1[26] = {0}; 
            int freq2[26] = {0}; 
        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }   
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
     return true;
    }
};
