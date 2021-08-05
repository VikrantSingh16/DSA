#include<iostream>
using namespace std;
void insertionSort(int a[],int size){
for(int i=1;i<size;i++){
int temp=a[i];
int j = i-1;
while(a[j]>temp&&j>=0){
    a[j+1]=a[j];
    j--;
}
a[j+1]=temp;
}
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
}
int main()
{
 int a[]={5,2,1,7,6};
 int size=sizeof(a)/sizeof(a[0]);
 insertionSort(a,size);
 return 0;
}