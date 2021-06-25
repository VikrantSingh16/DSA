/******************************************************************************
Trailing zeroes in factorial
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int res = 0;
    int n=5; 
    
    for(int i=5;i<=n;i=i*5){
       res = res+n/i; 
    }
    cout<<res;
    return 0;
}