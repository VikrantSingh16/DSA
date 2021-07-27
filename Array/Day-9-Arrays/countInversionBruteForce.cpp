/*Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.*/
#include<iostream>
using namespace std;
void countInversion(int a[],int size){
int count=0;
for(int i=0;i<size;i++){
   for(int j=i+1;j<size;j++){
    if(a[i]>a[j]){
        count++;
    }
   }
}
cout<<count;
}
int main(){
int a[] = {2, 4, 1, 3, 5};
int size=sizeof(a)/sizeof(a[0]);
countInversion(a,size);
    return 1;
}
