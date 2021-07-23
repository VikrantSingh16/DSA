/*
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
int getPairsCount(int a[], int n, int k) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                count++;
            }
        }
    }
    return count;
        
    }
int main(){
    int N = 4, X = 2;
int arr[] = {1, 1, 1, 1};
cout<<getPairsCount(arr,N,X);
    return 0;
}