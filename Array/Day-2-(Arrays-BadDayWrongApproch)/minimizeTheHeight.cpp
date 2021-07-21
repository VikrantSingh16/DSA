/*
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

A slight modification of the problem can be found here.


Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.

*/
#include<iostream>
#include<algorithm>
using namespace std;
int minimizeTheHeight(int a[],int size,int k){
    int max = 0,min=a[0];
    sort(a,a+size);
   for(int i=0;i<size;i++){
     if(a[i]>max){
         max=a[i];
     }
     else if(a[i]<min){
         min = a[i];
     }
    }
return (max-k)-(min+k);
}
int main(){
//    int a[] = {1, 5, 8, 10};
   int a[] = {2, 6 ,3, 4 ,7, 2, 10 ,3, 2, 1};
   int size =sizeof(a)/sizeof(a[0]);
  cout<<minimizeTheHeight(a,size,5); 
   return 0;
}