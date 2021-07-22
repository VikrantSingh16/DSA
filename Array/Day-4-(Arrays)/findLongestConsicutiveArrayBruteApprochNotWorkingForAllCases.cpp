#include <iostream>
using namespace std;
 int findLongestConseqSubseq(int a[], int n)
    {
      for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1-i;j++){
              if(a[j]>a[j+1]){
                  a[j]=a[j]^a[j+1];
                  a[j+1]=a[j]^a[j+1];
                  a[j]=a[j]^a[j+1];
              }
          }
      }
 
   int min = a[1]-a[0];

   int count=0;
   for(int i=0;i<n;i++){
       int val=a[i+1]-a[i];

       if(val==min){
           count++;
       }
       
       else{
           break;
       }
       val=0;
   }
   return count+1;
    }
int main()
{
 int a[] = {2,6,1,9,4,5,3};
    cout<<findLongestConseqSubseq(a,7);

    return 0;
}
