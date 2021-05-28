/******************************************************************************
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
*******************************************************************************/
#include <iostream>
using namespace std;
void moveNegSide(int a[],int size){
     for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
}
int main()
{
int a[9] = {1,2,0,2,1,0,2,1,0}; 
 int size = sizeof(a)/sizeof(a[0]);
 moveNegSide(a,size);
    return 0;
}
