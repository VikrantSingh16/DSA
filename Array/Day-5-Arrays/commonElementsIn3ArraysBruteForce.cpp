/*
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
*/
#include<iostream>
using namespace std;
int *sortArrays(int arr[], int length)
{
    for (int j = 0; j < length - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
              j = -1;
        }
    }
return arr;
}
void commonElements(int a[],int b[],int c[],int sizeA,int sizeB,int sizeC){
  int size = sizeA+sizeB+sizeC;
  int d[size];
  int count = 0,rep=0;
  for(int i=0;i<size;i++){
      if(i<sizeA){
          d[i]=a[i];
      }
      else if(i>=sizeA&&i<sizeA+sizeB){
          d[i]=b[count];
          count++;
      }
      else if(i>=sizeA+sizeB&&i<sizeA+sizeB+sizeC){
          
          d[i]=c[rep];
         rep++;
      }
  }
  sortArrays(d,size);
int prev = 0,curr=0; 
  for(int i=0;i<size;i++){
      prev=d[i];
      curr=d[i+1];
      if(prev==curr){
          cout<<prev<<" ";
      }
      
  }
    
}
int main(){
 int a[] = {1, 5,30, 10, 20, 40, 80};
 int b[] = {6, 7,30, 20, 80, 100};
 int c[] = {3, 4, 15, 20, 70, 80, 120};
int n1 = sizeof(a)/sizeof(a[0]);
int n2 = sizeof(b)/sizeof(b[0]);
int n3 = sizeof(c)/sizeof(c[0]);
commonElements(a,b,c,n1,n2,n3);
    return 0;
}