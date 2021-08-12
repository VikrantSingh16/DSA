#include<iostream>
using namespace std;
int main()
{
 int a[5]={1,2,3,4,5};
 int key = 3;
 int keyIndex=0;
bool find=0;
for(int i=0;i<5;i++){
    if(key==a[i]){
    find=1;
    }
    if(find){
        a[i]=a[i+1];
    }
}
for(int i=0;i<5-1;i++){
    cout<<a[i]<<" ";
}
 return 0;
}