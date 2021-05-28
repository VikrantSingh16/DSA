/******************************************************************************
Move all negative numbers to beginning and positive to end with constant extra space
*******************************************************************************/
#include <iostream>
using namespace std;
void moveNegSide(int a[],int size){
     for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
}
int main()
{
int a[9] = {-1,6,4,-3,2,-4,0,-4,-1}; 
 int size = sizeof(a)/sizeof(a[0]);
 moveNegSide(a,size);
    return 0;
}