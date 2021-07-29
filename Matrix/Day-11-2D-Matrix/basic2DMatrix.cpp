#include<iostream>
#define n 2
#define m 3
using namespace std;
int main(){
int a[n][m]={1,2,3,4,5,6};
int b[n][m]={7,8,9,10,11,12};
int c[n][m];
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}

    return -1;
}