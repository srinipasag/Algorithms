//Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
//Examples:
//s = "leetcode"
//return 0.
///s = "loveleetcode",
//return 2.

class Solution {
public:
    int firstUniqChar(string s) {
        int length = s.size();
        int result = -1;
        cout << s.size()<<endl; 
        vector<int> hash(256);        
        for (int i = 0; i< length; i++)
        {
            ++hash[s[i]];
        }
        //for (char c:s)
        for (int i = 0; i < length; i++)
        {
           if (hash[s[i]] == 1) {
            cout << i <<  hash[s[i]] << endl;
            result = i;
            break;
           }
        }
        return result;
    }
};
