#include <iostream>

using namespace std;

int main()
{
string name = "Vikrant";
string reverseStr;
for(int i=name.length();i>=0;i--){
   reverseStr=reverseStr+ name[i];
}
cout<<reverseStr;
    return 0;
}
