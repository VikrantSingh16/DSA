#include <iostream>

using namespace std;

int main()
{
    int n=4,m=5;
   int a1[n] = {1, 3, 5, 7};
   int a2[m] = {0, 2, 6, 8, 9};
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(a1[i]>a2[j]){
               int temp = a2[j];
               a2[j]=a1[i];
               a1[i]=temp;
           }
       }
   }
    for(int i=0;i<m-1;i++){
       for(int j=0;j<m-i-1;j++){
           if(a2[j]>a2[j+1]){
               int temp = a2[j];
               a2[j]=a2[j+1];
               a2[j+1]=temp;
           }
       }
   }
    
    for(int i=0;i<n;i++){
        cout<<"\t"<<a1[i];
    }
     for(int i=0;i<m;i++){
        cout<<"\t"<<a2[i];
    }
    return 0;
}
