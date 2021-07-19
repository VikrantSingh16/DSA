/*
Given an array, rotate the array by one position in clock-wise direction.
 Example 1:
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int a []= {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
        int temp = a[size-1];
    for(int i=size-2;i>=0;i--){
    a[i+1]=a[i];
    }
    a[0]=temp;
    for(int i=0;i<size;i++){cout<<a[i]<<endl;}
    return 0;
}