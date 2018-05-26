//International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.
// For convenience, the full table for the 26 letters of the English alphabet is given below:
/*
Example:
Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: 
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."
*/
There are 2 different transformations, "--...-." and "--...--.".

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> morseCode= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        //cout << words[1][1] << morseCode [1] << endl; 
        unordered_set<string> hs; 
        
        for(const string& word: words){
            string code = "";

           for (char c: word) {
              code += morseCode[c - 'a'];
           }
           cout <<    code << endl;
           hs.insert(code); 
     }
        
        //cout << hs.size () <<endl;
        return hs.size();
    }
};

//int main() {

    //vector<string> words = {"gin", "zen", "gig", "msg"};
    //cout << Solution().uniqueMorseRepresentations(words) << endl;

    //return 0;
//}
