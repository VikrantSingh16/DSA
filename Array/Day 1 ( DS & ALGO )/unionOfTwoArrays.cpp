/*
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.
Input:
5 3
1 2 3 4 5
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*/
#include<iostream>
using namespace std;
 int main(){
     int a[]={9, 1, 9, 1, 9, 1 ,0 };
     int b[]={9, 8, 7, 6, 5, 4, 3, 2, 1};
     int n = sizeof(a)/sizeof(a[0]);
     int m=sizeof(b)/sizeof(b[0]);
     int c[m+n];
     int count = 0;
     for(int i=0;i<m+n;i++){
         if(i<n){
             c[i]=a[i];
         }
         else{

             c[i]=b[count];
             count++;
         }
     }
int rep = 0;
for(int i=0;i<n+m;i++){
    for(int j=i;j<n+m;j++){
        if(c[i]==c[j+1]){
            cout<<"I m here"<<endl;
            rep++;
            break;
        }
    }
}
    cout<<"Union of this array is :"<<m+n-rep;
     return 0;
 }
