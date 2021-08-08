#include<iostream>
using namespace std;
int main()
{
 int a[]={1,2,3,4,5};
 cout<<"The pairs are: "<<endl;
 for(int i=0;i<5;i++){
     for(int j=0;j<5;j++){
         cout<<a[i]<<" "<<a[j]<<endl;
     }
 }
 return 0;
}