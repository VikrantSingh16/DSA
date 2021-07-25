#include<iostream>
using namespace std;
int main(){
   int a[]= {3,5,10,7,4,9,3};
   int size = sizeof(a)/sizeof(a[0]);
   int maxPro=0;
   int dayBought = 0;
   int daySold = 0;
   for(int i=0;i<size;i++){
       for(int j=i+1;j<size;j++){
           if((a[j]-a[i])>maxPro){
               maxPro=a[j]-a[i];
               dayBought=i+1;
               daySold=j+1;
           }
       }
   }
   cout<<"Day to boy: "<<dayBought<<endl;
   cout<<"Day to Sell: "<<daySold<<endl;
   cout<<"Max Profit: "<<maxPro;
    return 0;
}