#include<iostream>
using namespace std;
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int partitioningLogic(int l,int h,int a[]){
int pivot=a[l];
int i=l,j=h;
while(i<j){
while(a[i]<=pivot)i++;
while(a[j]>pivot)j--;
if(i<j){
   swap(a,i,j);
}
}
swap(a,l,j);
return j;
}
void quickSort(int l,int h,int a[]){
if(l<h){
    int pivot = partitioningLogic(l,h,a);
quickSort(l,pivot-1,a);
quickSort(pivot+1,h,a);
}
} 
int main()
{
 int a[]={4,6,2,5,7,9,1,3};
 int size = sizeof(a)/sizeof(a[0]);
quickSort(0,size-1,a);
for(int i=0;i<size;i++) cout<<a[i]<<" ";
 return 0;
}