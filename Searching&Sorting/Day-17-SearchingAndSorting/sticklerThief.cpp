/*Not working for all cases*/
#include<iostream>
using namespace std;
 int FindMaxSum(int a[], int n)
    {
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    int ans=max(even,odd);
    return ans;
    }
int main()
{
   int n = 6;
int a[] = {5,5,10,100,10,5};
cout<<FindMaxSum(a,n);
 return 0;
}