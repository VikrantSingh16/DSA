#include<iostream>
using namespace std;
int main()
{
int a[]={1,4,7,9,11,23,45};
int key=2;
int i=0;
bool flag=0;
while(a[i]>0){
if(key==a[i]){
    flag=1;
    break;
}
i++;
}
if(flag)cout<<"found";
else cout<<"not found";
 return 0;
}