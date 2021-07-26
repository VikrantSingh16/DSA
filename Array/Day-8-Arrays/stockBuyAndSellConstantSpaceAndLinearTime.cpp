#include<iostream>
using namespace std;
int main(){
    int a[]={3,4,2,8,7,2,10};
int size = sizeof(a)/sizeof(a[0]);
int minSoFar = a[0];
int maxSoFar = a[0];
for(int i=0;i<size;i++){
if(minSoFar>a[i]){
minSoFar=a[i];
}
if(maxSoFar<(a[i]-minSoFar)){
maxSoFar = a[i]-minSoFar;
}
}
cout<<maxSoFar;
    return 0;
}