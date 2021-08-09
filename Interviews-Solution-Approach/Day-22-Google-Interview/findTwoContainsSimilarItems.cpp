/*
Given two arrays find if they contains similar element or not using function and return
true of false
example for false case : int array1=[a,b,c,d];
int array2=[e,f,g,h]; 
return false
example for true case : int array1=[a,b,c,d];
int array2=[a,e,f,g]; 
return true
*/
#include<iostream>
using namespace std;
bool twoArrayContainsSimilarItems(int a1[],int a2[],int size1,int size2){
for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
        if(a1[i]==a2[j]){
            return true;
        }
    }
}
return false;
}
int main()
{
int a1[]={'a','b','c','d'};
int a2[]={'h','e','f','b'}; 
int size1=sizeof(a1)/sizeof(a1[0]);
int size2=sizeof(a1)/sizeof(a1[0]);
cout<<twoArrayContainsSimilarItems(a1,a2,size1,size2);
 return 0;
}