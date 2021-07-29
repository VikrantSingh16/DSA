#include<iostream>
#define size 9
#define n 3
using namespace std;
int main(){
    int a[n][n]={1,5,3,2,8,7,4,6,9};
    int c[size];
    int it=0;
   cout<<"Before Sorting "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[it]=a[i][j];
        it++;
        }
    }
sort(c,c+size);
 it=0;
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=c[it];
        it++;
        }
    }
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}