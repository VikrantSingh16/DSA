#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[]={-8, 5, 3, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
   int result = arr[0];
 
    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        // traversing in current subarray
        for (int j = i + 1; j < n; j++)
        {
            // updating result every time
            // to keep an eye over the maximum product
            result = max(result, mul);
            mul *= arr[j];
        }
        // updating the result for (n-1)th index.
        result = max(result, mul);
    }

    cout<<result;
    return 1;
}