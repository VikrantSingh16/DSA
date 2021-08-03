//Cannot Find missing elements with this approach
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]={ 4, 3, 6, 2, 1, 1 };
int n=sizeof(a)/sizeof(a[0]);
sort(a,a+n);
int repeat=0,missing=0;
for(int i=0;i<n;i++){
if(a[i]==a[i+1]){
repeat=a[i];
}
}
cout<<"Repeating element: "<<repeat<<endl;
cout<<"Missing: "<<missing;
 return 0;
}