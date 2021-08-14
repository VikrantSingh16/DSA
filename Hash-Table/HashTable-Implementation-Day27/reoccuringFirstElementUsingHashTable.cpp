#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
 unordered_map<int,int> um;
 int a[]={2,3,4,1,2,0,3,7,8};
 int size = sizeof(a)/sizeof(a[0]);
 for(int i=0;i<size;i++){
     if(um.find(a[i])==um.end()){
     um.insert(make_pair(a[i],1));
     }
     else {
         cout<<"found first occuring "<<a[i];
       break;
     }
 }
 
    
 return 0;
}