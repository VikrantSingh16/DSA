/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
*/
#include <iostream>

using namespace std;

int main()
{
 //int a[]={0,1,0,1,2,1,0,2};
 int a[]= {0, 2 ,1 ,2, 0};

int size = (sizeof(a)/sizeof(a[1]));
int count0=0,count1=0,count2=0;
for(int i=0;i<size;i++){
    if(a[i]==0){
count0++;
    }
    else if(a[i]==1){
        count1++;
    }
    else{
        count2++;
    }
}
for(int i=0;i<size;i++){
    if(i>=0&&i<count0){
        a[i]=0;
       
    }
    else if(i>=count0&&i<count0+count1){
   
        a[i]=1;
    }
    else if(i>=count1&&i<count1+count2+count0){
        a[i]=2;
    }
}
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
    return 0;
}