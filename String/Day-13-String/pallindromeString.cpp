/*
Palindrome String 
Easy Accuracy: 50.77% Submissions: 43398 Points: 2
Given a string S, check if it is palindrome or not.
Example 1:
Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:
Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
*/
#include<iostream>
using namespace std;
int pallindrome(string word){
//we will return 1 if pallidrome else return 0
string reverseWord;
for(int i=word.length()-1;i>=0;i--){
reverseWord+=word[i];
}
if(reverseWord==word){
    return 1;
}
else{
    return 0;
}
}
int main(){
    cout<<pallindrome("var");
    return 1;
}