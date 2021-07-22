#include <iostream>
#include<vector>
using namespace std;
bool subArrayExists(int a[], int n)
    {
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum+=a[j];
                if(sum==0){
                    return true;}
            }
            sum=0;
        }
    return false;
        
    }
int main()
{
int a[]={4 ,2 ,-3, 1, 6};
cout<<subArrayExists(a,5);
return 0;
}
