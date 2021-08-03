/*Majority Element 
Easy Accuracy: 48.6% Submissions: 99025 Points: 2
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
*/
#include<iostream>
using namespace std;
int main()
{
int a[] = {2,1,2,3,2,3,2};
int size = sizeof(a)/sizeof(a[0]);
int count=0;int max=0;int num=0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]==a[j]){
            count++;
        }
        if(count>max){
num=a[i];
max=count;
        }
    }
    count=0;
}
if((max+1)>(size/2)){
    cout<<num;
}
else{
    cout<<"Not found";
}
 return 0;
}