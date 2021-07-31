/*Write a function that reverses a string. The input string is given as an array of characters s.
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]*/
#include<iostream>
using namespace std;
string reverseAString(string word){
string reverseWord;
for(int i=word.length()-1;i>=0;i--){
   reverseWord+=word[i];
}
return reverseWord;
}
int main(){
cout<<reverseAString("VikrantSingh");
return 1;
}