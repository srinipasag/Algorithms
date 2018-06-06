//Given two strings s and t , write a function to determine if t is an anagram of s.
//Example 1:
//Input: s = "anagram", t = "nagaram"
//Output: true
//Example 2:
//Input: s = "rat", t = "car"
//Output: false
//Note:
//You may assume the string contains only lowercase alphabets.
//Follow up:
//What if the inputs contain unicode characters? How would you adapt your solution to such case?


class Solution {
public:
    bool isAnagram(string s, string t) {
        int length = s.size();
        vector<int> charCount(26,0);
        for (int i =0; i < s.size(); i++)
            charCount[s[i]-'a']++;
        for (int i = 0; i < t.size(); i++)
            charCount[t[i]-'a']--;
        for (int i = 0; i<charCount.size(); i++)
        {
            if (charCount[i] != 0)
                return false; 
        }
        
        return true; 
        
            
    }
};
