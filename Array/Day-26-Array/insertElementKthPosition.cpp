#include<iostream>
using namespace std;
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9};
int insert=3;
int ele=12;
 for(int i=9;i>=insert;i--){
     a[i]=a[i-1];
   }
   a[insert-1]=ele;
 for(int i=0;i<10;i++){
     cout<<a[i]<<" ";
 }
 return 0;
}