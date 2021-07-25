#include<iostream>
#include<unordered_map>
using namespace std;
int maxEleInArray(int a[],int size){
unordered_map<int,int> s;
int n=0;
for(int i=0;i<size;i++){
   s[a[i]]++;
}
 for(int i=0;i<size;i++) {
            if(s[a[i]] > (size/2)) {
                n = a[i];
                break;
            }
        }
        return n;
}
int main(){
    int a[] ={5,5,5,5,8,8,8,5,8,8,8,8,8,8,8,8,1,1}; 
    int size = sizeof(a)/sizeof(a[0]);
   cout<<maxEleInArray(a,size);
    return 11;
}