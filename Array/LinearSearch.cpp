#include <iostream>
int search(int [],int,int);
using namespace std;

int main()
{
int a[6]={2,1,0,3,2,7};
int key;
int size=sizeof(a)/sizeof(a[0]);
cin>>key;
if(search(a,key,size)==1){
  cout<<"found";  
}
else{
    cout<<"not found";
}
    return 0;
}
int search(int a[],int key,int size){
   for(int i=0;i<size;i++){
       if(key==a[i]){
           return 1;
           cout<<"found";
       }
   } 
return -1;
}