#include<iostream>
#include<algorithm>
using namespace std;
void mergeTwoSortedArrays(int a[],int b[],int size1,int size2){

int j=0;
 int c[size1+size2];
 for(int i=0;i<size1+size2;i++){
     if(i<size1)
     c[i]=a[i];
    else {
    c[i]=b[j];
    j++;
    }
 }
 sort(c,c+(size1+size2));
for(int i=0;i<size1+size2;i++){
    cout<<c[i]<<" ";
}
}
using namespace std;
int main()
{
 int a[]={1,3,5,7,9};
 int b[]={2,4,6,8,10};
 int size1=sizeof(a)/sizeof(a[0]);
 int size2 = sizeof(b)/sizeof(b[0]);
 mergeTwoSortedArrays(a,b,size1,size2);
 return 0;
}