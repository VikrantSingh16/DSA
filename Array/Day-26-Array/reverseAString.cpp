#include<iostream>
using namespace std;
int main()
{
 string name="Vikrant";
 string reverseName;
 for(int i=name.length();i>=0;i--){
reverseName+=name[i];
 }
 cout<<reverseName;
 return 0;
}