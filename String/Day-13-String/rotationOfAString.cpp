#include<iostream>
using namespace std;
int rotationOfString(string s1,string s2){
string temp=s1+s1;
if(s1==s2){
return 0;
}
if(s1.length()!=s2.length()){
    return false;
}
else{
    if(temp.find(s2)!=string::npos){
        return 1;
    }
    else{
        return 0;
    }
}
}
int main(){
cout<<rotationOfString("ABCD","ABCD");
    return 1;
}