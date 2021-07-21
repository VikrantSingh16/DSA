#include<iostream>
using namespace std;
int findMedium(int a[],int b[],int m,int n){
int c[m+n];
    int count = 0;
    for(int i=0;i<m+n;i++){
        if(i<m){
            c[i]=a[i];
        }
        else{
            c[i]=b[count];
            count++;
        }
    }
   
    for(int i=0;i<m+n-1;i++){
        for(int j=0;j<m+n-i-1;j++){
            if(c[j]>c[j+1]){
                c[j]=c[j]^c[j+1];
                c[j+1]=c[j]^c[j+1];
                c[j]=c[j]^c[j+1];
                
            }
        }
    }
    
    int mid = (m+n)/2;
if((m+n)%2!=0){
        
        return c[mid];
    }
    else{
        return (c[mid-1]+c[mid])/2;
    }
}
int main(){
    int a[] = {-5, 3, 6, 12, 15};
    int b[] = {-12, -10, -6, -3, 4, 10};
    int m = sizeof(a)/sizeof(a[1]);
    int n = sizeof(b)/sizeof(b[1]);
cout<<findMedium(a,b,m,n)<<endl;
   return 0;
}