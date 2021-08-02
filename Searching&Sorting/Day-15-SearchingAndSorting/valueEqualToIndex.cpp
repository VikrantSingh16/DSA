/*
Value equal to index value 
School Accuracy: 54.64% Submissions: 24236 Points: 0
Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value.
Example 1:
Input: 
N = 5
Arr[] = {15, 2, 45, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here.
Example 2:
Input: 
N = 1
Arr[] = {1}
Output: 1
Explanation: Here Arr[1] = 1 exists.
*/
#include<iostream>
using namespace std;
void valueEqualToIndex(int a[], int n)
{
   for(int i=0;i<n;i++){
       if(a[i]==i+1){
           cout<<i+1<<endl;
       }
   } 
}
int main(){
int a[] =  {15, 2, 45, 12, 7};
int n=sizeof(a)/sizeof(a[0]);
valueEqualToIndex(a,n);
    return 1;
}