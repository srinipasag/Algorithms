// Given two strings s and t which consist of only lowercase letters.
// String t is generated by random shuffling string s and then add one more letter at a random position.
// Find the letter that was added in t.

// Input:
// s = "abcd"
// t = "abcde"
// Output:
//   e

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hash (t.size());
        char temp;
        for (int i = 0; i < s.size(); i++)
              ++hash[s[i]];
        for (int i = 0; i< t.size(); i++) 
            if (--hash[t[i]] < 0) return t[i];
                return 0;
    }
};
