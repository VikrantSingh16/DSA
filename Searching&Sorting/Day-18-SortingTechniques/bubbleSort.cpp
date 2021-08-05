#include<iostream>
using namespace std;
void bubbleSort(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
     }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
 int a[]={5,2,4,0,1};
 int size=sizeof(a)/sizeof(a[0]);
 bubbleSort(a,size);
 return 0;
}