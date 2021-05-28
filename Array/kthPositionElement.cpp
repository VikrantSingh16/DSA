/******************************************************************************
Find the Kth largest and Kth smallest number in an array
*******************************************************************************/

#include <iostream>

using namespace std;
void bubbleSort(int a[],int size,int k){
for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = a[j];
    }
}    

cout<<"Kth position element is "<<a[k-1];
}
int main()
{
    int a[6]={4,3,2,7,9,8};
    int size = sizeof(a)/sizeof(a[1]);
    bubbleSort(a,size,4);
    return 0;
}