// 3330. Find the Original Typed String I
/*Solved
Easy
Topics
premium lock icon
Companies
Hint
Alice is attempting to type a specific string on her computer. However, she tends to be clumsy and may press a key for too long, resulting in a character being typed multiple times.

Although Alice tried to focus on her typing, she is aware that she may still have done this at most once.

You are given a string word, which represents the final output displayed on Alice's screen.

Return the total number of possible original strings that Alice might have intended to type.

 

Example 1:

Input: word = "abbcccc"

Output: 5

Explanation:

The possible strings are: "abbcccc", "abbccc", "abbcc", "abbc", and "abcccc".

Example 2:

Input: word = "abcd"

Output: 1

Explanation:

The only possible string is "abcd".

Example 3:

Input: word = "aaaa"

Output: 4

*/


// code
/*
 brute-force:


class Solution {
public:
    int possibleStringCount(string word) {
        map<char, int> mpp; 
        int cnt = word.size();
        for(int i = 0 ; i < cnt ; i++){
            if(i == 0){
                mpp[word[i]]++;
                continue;
            }
            if(mpp[word[i]] == 0 || word[i] == word[i-1]){
                mpp[word[i]]++;
            }
        }
        int sum = 0;
        int size = mpp.size();
        for(auto &it : mpp){
            sum += it.second;
        }
        
        int ans = sum - size + 1;

        return ans;
    }
};


*/

/*
optimal: 


class Solution {
public:
    int possibleStringCount(string word) {
        int cnt = 1;
        for(int i = 1 ; i < word.size(); i++){
            if(word[i] == word[i-1]){
                cnt++;
            }
        }
        return cnt;
    }
};



*/