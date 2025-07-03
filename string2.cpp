/*



Alice and Bob are playing a game. Initially, Alice has a string word = "a".

You are given a positive integer k.

Now Bob will ask Alice to perform the following operation forever:

Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
For example, performing the operation on "c" generates "cd" and performing the operation on "zb" generates "zbac".

Return the value of the kth character in word, after enough operations have been done for word to have at least k characters.

Note that the character 'z' can be changed to 'a' in the operation.

 

Example 1:

Input: k = 5

Output: "b"

Explanation:

Initially, word = "a". We need to do the operation three times:

Generated string is "b", word becomes "ab".
Generated string is "bc", word becomes "abbc".
Generated string is "bccd", word becomes "abbcbccd".
Example 2:

Input: k = 10

Output: "c"

 

Constraints:

1 <= k <= 500


*/


/*

code

class Solution {
public:
    void check(int k, string& s){
        if(s.length() >= k)return;
        string app = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'z'){
                app += 'a';
            }else{
                char c = s[i] + 1;
                app += c;
            }
        }
        s += app;
        check(k, s);
    }
    char kthCharacter(int k) {
        string s = "a";
        check(k, s);
        char ch = s[k-1];

        return ch;
    }
};

*/