//Works for Two elements
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[]={5,10,15,5};
int b[]={15,10,4};
int n=5,m=3;
int count = 0;
int c[m+n];
for(int i=0;i<m+n;i++){
    if(i<n){
     c[i]=a[i];
    }
    else{
        c[i]=b[count];
        count++;
    }
}
sort(c,c+m+n);
for(int i=0;i<n+m;i++){
    cout<<c[i]<<" ";
}
cout<<endl;
int prev=c[0];
int curr=c[1];
int inter=0;
for(int i=1;i<m+n;i++){
    if(prev==curr){
inter++;
    }
    prev=c[i];
    curr=c[i+1];
}
cout<<inter<<endl;
    return 0;
}