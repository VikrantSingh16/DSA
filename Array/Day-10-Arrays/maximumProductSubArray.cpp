/*
Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:

Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
Explanation: Subarray with maximum product
is 6, -3, -10 which gives product as 180.
*/
//this solution works only for positive solution
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int maxEle = 1;
int prevMax=0;
int results=0;
// int a[]={6,-3,-10,0,2};
// int size=sizeof(a)/sizeof(a[0]);
int size= 6;
int a[] = {5,-8, -5, 3, 1, 6};

 for(int i=0;i<size;i++){
    
    if(maxEle>prevMax){
    prevMax=maxEle;
    }
    maxEle=maxEle*a[i];
    if(maxEle==0){
        maxEle=1;
    }
    
    results=max(prevMax,maxEle);

}

cout<<results;
cout<<endl;

return -2;
}