//NOT WORKING
#include<iostream>
using namespace std;
bool isPalindrome(string s){
    string reverseString;
    for(int i=s.length()-1;i>=0;i--){
        reverseString+=s[i];
    }
    if(s==reverseString)
    return true;
    else return false;
}
void longestPalindromeInAString(string s){
for(int i=0;i<s.length();i++){
       string check;
       int flag=1;
        for(int j=i;j<s.length();j++){
            check+=s[j];
            if(s[i]==s[j+1]){
                flag=0;
            }
        }
         if(flag==1){
            cout<<s[0];
            break;
        }
         if(isPalindrome(check)==1){
            cout<<"The longest palidrome is "<<check;
            break;
        }
       
    
     }
   
}
int main(){
    
    string s ="Geeks";
    longestPalindromeInAString(s);
    return 0;
}