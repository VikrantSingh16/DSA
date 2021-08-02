#include<iostream>
using namespace std;
void find(int a[], int n , int x )
{
    int minPos=19999,maxPos=0;
    for(int i=0;i<n;i++){
        if(x==a[i]&&i<minPos){
           minPos=i; 
        }
        if(a[i]==x){
        maxPos=i;
        }
    }
    cout<<"Min: "<<minPos<<endl;
    cout<<"Max: "<<maxPos<<endl;
}
int main(){
int a[] =  { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
int n=sizeof(a)/sizeof(a[0]);
int x=7;
find(a,n,x);
    return 1;
}