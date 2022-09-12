//Create a new string consisting only the alphanumeric part of the original string
//Create two pointers - one at the start and one at the end of the new string
//In a while loop, Iterate from the start and the end and stop when the two pointers meet. (Increase the start pointer and decrease the end pointer)
//If at any point the characters are not equal, the string is not a palindrome

class Solution {
public:
    //0-9 -> 48-57
    //A-Z -> 65-90
    //a-z -> 97-122
    bool isPalindrome(string s) {
        int l = s.length();
        string realS = "";
        for(int i=0; i<l; i++){
            if(s[i] >=65 && s[i] <=90)realS += tolower(s[i]);
            else if (s[i] >=97 && s[i] <= 122)realS += s[i];
            else if(s[i] >=48 && s[i] <= 57)realS += s[i];
        }
        int realLen = realS.length();
        int i = 0;
        int j = realLen-1;
        while(i<j){
            if(realS[i++] != realS[j--])return false;
        }
        return true;
    }
};
//TC - O(n)
//SC - O(1)
