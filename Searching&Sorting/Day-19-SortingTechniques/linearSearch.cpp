#include<iostream>
using namespace std;
int linearSearch(int a[],int size,int key){
for(int i=0;i<size;i++){
    if(key==a[i])
    return i+1;
}
return -1;
}
int main()
{
int a[]={1,23,55,66,89,90};
int size = sizeof(a)/sizeof(a[1]);
int res = linearSearch(a,size,23);
if(res!=-1){
    cout<<"Found at pos "<<res<<endl;
}
else {
    cout<<"not found";
}
 return 0;
}