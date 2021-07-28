/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
 Example 1:
Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[]={1,9,3,10,4,20,2};
int size = sizeof(a)/sizeof(a[0]);
sort(a,a+size);
int prev=a[1]-a[0];int count=1;
for(int i=1;i<size;i++){
    if(prev==a[i]-a[i-1]){
        count++;
    }
} 
cout<<count;
    return 0;
}