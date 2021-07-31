#include<iostream>
#include<map>
using namespace std;
int main(){
map<char,int> m;
string s="geeksforgeeks";
for(int i=0;i<s.length();i++){
    m[s[i]]++;
}
for(auto it:m){
    if(it.second>1){
        cout<<it.first<<" count= "<<it.second<<endl;
    }
}
return 1;
}