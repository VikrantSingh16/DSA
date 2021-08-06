#include<iostream>
using namespace std;
int binarySearch(int a[],int size,int key){
int low = 0; int high = size-1;int flag=0;
int mid = (low+high)/2;
     if(key==a[mid]){
         return mid;
         }
     else if(key>a[mid]){
         low = mid+1;
         for(int i=low;i<=high;i++){
             if(key==a[i]){
                return i;
     }
         }
     }
 else{
     high=mid-1;
     for(int i=low;i<=high;i++){
         if(key==a[i]){
            return i;
       }
   }
 }
 }

int main()
{
 int a[]={1,23,55,66,89,90};
 int size = sizeof(a)/sizeof(a[1]);
 cout<<binarySearch(a,size,66);
 return 0;
}