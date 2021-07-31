/*mat[N][N] = {{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
Output: 18
The maximum value is 18 as mat[4][2] 
- mat[1][0] = 18 has maximum difference. */
#include <iostream>
#define n 5
using namespace std;
int main()
{
    int maxEle=INT_MIN;
    int arr[n][n] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 6, 1, 3},
        {-4, -1, 1, 7, -6},
        {0, -4, 10, -5, 1}};

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        for(int a=i+1;a<n;a++)
        for(int b=j+1;b<n;b++)
if(maxEle<arr[a][b]-arr[i][j])
    maxEle=arr[a][b]-arr[i][j];

    

cout<<maxEle;

    return 1;
}
