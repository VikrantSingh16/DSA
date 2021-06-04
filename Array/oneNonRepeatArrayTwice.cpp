/******************************************************************************
find the only non repeating number in arry where every number repeats twice
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;
  int a[5]={1,4,4,3,3};
  for(int i=0;i<5;i++){
      num = num^a[i];
  }
cout<<num;

    return 0;
}
