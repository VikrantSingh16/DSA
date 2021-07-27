/*
Count pairs with given sum 
Easy Accuracy: 41.59% Submissions: 57028 Points: 2
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
Example 1:
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/
#include<iostream>
using namespace std;
int main(){
int a[]={1, 5, 7, 1};
int k=6;
int count = 0;
int size=sizeof(a)/sizeof(a[0]);
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]+a[j]==k){
count++;
        }
    }
}
 cout<<count;
    return 0;
}