/******************************************************************************
Pallindrome Numbers
*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  int n,rev=0;
  cin>>n;
  int temp = n;
  while(temp>0){
      rev=rev*10;
      rev = rev+temp%10;
      temp=temp/10;
      
  }
  if(rev==n){
      cout<<"Pallindrome";
  }
  else cout<<"Not Pallindrome";
    return 0;
}