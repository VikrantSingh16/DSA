#include<iostream>
#include<unordered_set>
using namespace std;
int unionOfArrays(int a[],int b[],int n,int m){
unordered_set<int> s;
for(int i=0;i<n;i++){
    s.insert(a[i]);
}
for(int i=0;i<m;i++){
    s.insert(b[i]);
}
return (m+n)-s.size();
}
int main(){
int a[]={5,10,15,5};
int b[]={15,10,4};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
   cout<<unionOfArrays(a,b,n,m);
   return 0; 
}