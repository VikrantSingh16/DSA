#include<iostream>
using namespace std;
int main()
{
 int min=19999999;
     int max=0;
  int a[]={1,23,55,66,89,90};
 int size = sizeof(a)/sizeof(a[1]);
 for(int i=0;i<size;i++){
     if(min>a[i])min=a[i];
     if(max<a[i])max=a[i];
 }
 cout<<"Max element in the array is "<<max<<" Min element in the array is "<<min<<endl;
 return 0;
}