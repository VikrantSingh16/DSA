//Write a program to reverse the array
#include <iostream>
void reverseIntArray(int [],int);
using namespace std;

int main()
{
    int a[6]={2,1,5,6,3,2};
    int size = sizeof(a)/sizeof(int);
    reverseIntArray(a,size);
    return 0;
  
}
void reverseIntArray(int a[],int size){
     for(int i=0;i<size/2;i++){
         int temp=a[i];
          a[i] = a[size-i-1];
         a[size-i-1] = temp;
     }
 cout<<"Reverse Int array is :";
 for(int i=0;i<size;i++){
     cout<<a[i]<<endl;
 }
 }