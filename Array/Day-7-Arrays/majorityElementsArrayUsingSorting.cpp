#include<iostream>
#include<algorithm>
using namespace std;
int maxEleInArray(int a[],int size){
 sort(a,a+size);
 int count=0,maxCount=0,maxEle=0;
 for(int i=0;i<size;i++){
 if(a[i]==a[i+1]){
     count++;
 }
  if(a[i]!=a[i+1]){
     count=0;
 }
 if(count>maxCount){
     maxCount=count;
     maxEle=a[i];
 }

 }

 if(maxCount>size/2){
     return maxEle;
 }
 else{
     return -1;
 }
}
int main(){
    int a[] ={5,5,5,5,8,8,8,5,8,8,8,8,8,8,8,8,1,1}; 
    int size = sizeof(a)/sizeof(a[0]);
   cout<<maxEleInArray(a,size);
    return 11;
}