#include <iostream>

using namespace std;
string subSet(int a1[],int a2[],int n,int m){
    int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a1[i]==a2[j]){
            count++;
        }
    }
}
    if(count==m){
        return "true";
    }
    else{
        return "false";
    }
}
int main()
{
int a1[] = {11, 1, 13, 21, 3, 7};
int a2[] = {11, 3, 7,3};
int n=sizeof(a1)/sizeof(a1[0]);
int m=sizeof(a2)/sizeof(a2[0]);
cout<<subSet(a1,a2,n,m);
    return 0;
}