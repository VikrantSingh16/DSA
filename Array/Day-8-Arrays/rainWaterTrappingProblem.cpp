#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int a[]={3,1,2,4,0,1,3,2};
   int size = sizeof(a)/sizeof(a[0]);
   int left[size];
   int maxSoFar = 0;
   for(int i=0;i<size;i++){
       if(maxSoFar<a[i]){
           maxSoFar = a[i];
       }
       left[i] = maxSoFar;
   } 
   int right[size];
   maxSoFar=0;
   for(int i=size-1;i>=0;i--){
    if(maxSoFar<a[i]){
        maxSoFar=a[i];
    }
    right[i]=maxSoFar;
   }
   int results = 0;
   for(int i=0;i<size;i++){
results+=min(left[i],right[i])-a[i];
   }
    cout<<results;
    return 0;
}