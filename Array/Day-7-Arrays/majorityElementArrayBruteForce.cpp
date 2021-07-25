//element should be present more than sizeofarray/2 to called majority element in that array
#include<iostream>
using namespace std;
int maxEleInArray(int a[],int size){
 int maxCount = 0;
    int currCount = 0;
    int maxNum=0;
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(a[i]==a[j]){
                currCount++;
            }
            if(currCount>maxCount){
                maxCount=currCount;
                maxNum=a[i];
            }
        }
        currCount=0;
    }
   if(maxCount>size/2){
       return maxNum;
   }
   else{
       return 0;
   }
}
int main(){
    int a[] ={5,5,5,5,5,5,5,5,5,8,8,8,8,1,1}; 
    int size = sizeof(a)/sizeof(a[0]);
   cout<<maxEleInArray(a,size);
    return 11;
}