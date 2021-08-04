#include<iostream>
using namespace std;
bool findPair(int a[], int size, int num){
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
if(num==a[i]-a[j]){
    return 1;
}
    }
}   
return 0;  
}
int main()
{
int num = 78;
int a[] ={5, 20, 3, 2, 5, 80};
int size = sizeof(a)/sizeof(a[0]);
cout<<findPair(a,size,num);

 return 0;
}