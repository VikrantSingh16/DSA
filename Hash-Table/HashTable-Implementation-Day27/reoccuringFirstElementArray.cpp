#include<iostream>
using namespace std;
int main()
{
    bool found = false;
 int a[]={2,3,4,1,2,0,3,7,8};
 int size = sizeof(a)/sizeof(a[0]);
 for(int i = 0 ; i < size ; i++){
     for(int j = i + 1 ; j < size ; j++){
         if(a[i]==a[j]){
             found=true;
             cout<<a[i];
             break;
         }
     }
 if(found==true){break;}
 }
 return 0;
}