#include<iostream>
#include<algorithm>
#include<vector>
#define size 9
#define n 3
using namespace std;
int main(){
int a[n][n]={1, 3, 5,2, 6, 9,3, 6, 9};
int c[size];
int it=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         c[it]=a[i][j];
         it++;
    }
}
int medium=(size/2);
sort(c,c+size);
cout<<"medium is "<<c[medium];
    return 0;

}