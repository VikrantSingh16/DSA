/**
 A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple-element exist to return the first occurrence of the key.
Examples: 
Input : arr[] = {4, 5, 6, 7, 6}
           k = 1
           x = 6
Output : 2
The first index of 6 is 2.
Input : arr[] = {20, 40, 50, 70, 70, 60}  
          k = 20
          x = 60
Output : 5
The index of 60 is 5
*/
#include<iostream>
using namespace std;

int findIndex(int a[],int size,int x){
for(int i=0;i<size;i++){
    if(x==a[i])
        return i;

}
}
int main()
{
  int a[]= {4, 5, 6, 7, 6};
  int k = 1;
  int x = 6;
  int size=sizeof(a)/sizeof(a[0]);
  cout<<findIndex(a,size,x);
 return 0;
}