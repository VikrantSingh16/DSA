#include<iostream>
using namespace std;
int main(){
int a[]={3,4,1,8,7,2,5};
int size = sizeof(a)/sizeof(a[0]);
int aux[size];
int maxSoFar = a[0];
for(int i=size-1;i>=0;i--){
    if(maxSoFar<a[i]){
        maxSoFar=a[i];
    }
    aux[i]=maxSoFar;
}
int maxPro = 0;
int prevMax = a[0];

for(int i=0;i<size;i++){
if(prevMax>maxPro){
    maxPro=prevMax;

    prevMax=aux[i]-a[i];
}
}
 cout<<maxPro<<endl;  
    return 0;
}