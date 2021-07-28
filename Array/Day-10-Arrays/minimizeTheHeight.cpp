#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
 int getMinDiff(int a[], int n, int k){
sort(a,a+n);
int maxEle,minEle;
int results = a[n-1]-a[0];
for(int i=1;i<n;i++){
    if(a[i]>=k&&a[n-1]>=k){
    maxEle = max(a[n-1]-k,a[i-1]+k);
    minEle = min(a[0]+k,a[i]-k);
results = min(results,maxEle-minEle);
}}
return results;
}
int main(){
 int k = 6;
int a[] = { 1, 15, 10};
int n =sizeof(a)/sizeof(a[0]);        
        cout<<getMinDiff(a,n,k);
}