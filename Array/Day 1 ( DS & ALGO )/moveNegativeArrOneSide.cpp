/*
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Note: Order of elements is not important here.
*/
#include<iostream>
using namespace std;

int main(){
int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
int size = sizeof(a)/sizeof(a[0]);
for(int i=0;i<size-1;i++){
for(int j=0;j<size-1-i;j++){
if(a[j]>a[j+1]){
a[j]=a[j]^a[j+1];
a[j+1]=a[j]^a[j+1];
a[j]=a[j]^a[j+1];
}
}
}
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
return 0;
}