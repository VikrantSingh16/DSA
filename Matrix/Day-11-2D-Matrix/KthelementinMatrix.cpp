#include<iostream>
#include<algorithm>
#define size 16
#define n 4
using namespace std;
int main(){
    int k=7;
int c[size];
int it=0;
int a[n][n]={10, 20, 30, 40,15, 25, 35, 45,24, 29, 37, 48,32, 33, 39, 50};
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
c[it]=a[i][j];
it++;
    }
}
sort(c,c+size);
cout<<"Kth smallest element is "<<c[k-1];
return 0;
}