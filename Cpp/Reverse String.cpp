// Source : https://leetcode.com/problems/reverse-string/
// Author : Curtis
// Date   : 2017-02-16

/*************************************************************************************** 
 *
 * Write a function that takes a string as input and returns the string reversed.
 * 
 * Example:
 * Given s = "hello", return "olleh".
 ***************************************************************************************/

class Solution {
public:
    string reverseString(string s) {
        char tmpChar;
        for(int i=0; i<s.size()/2; i++)
        {
            tmpChar = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = tmpChar;
        }
        return s;
    }
};
