#include<iostream>
#include<algorithm>
using namespace std;
int count(int a,int b,int c){
int arr[]={a,b,c};
sort(arr,arr+3);
return arr[1];
}
int main(){
int a=978,b=518,c=300;
cout<<count(a,b,c);
}