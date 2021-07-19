#include <iostream>

using namespace std;

void minAndMax(int a[],int size){
    for(int i = 0; i < size - 2 ; i++ ){
        for(int j = 0; j < size - 1 - i; j++ ){
            if(a[j]>a[j+1]){
            a[j] = a[j] ^ a[j+1];
            a[j+1] = a[j] ^ a[j+1];
            a[j] = a[j] ^ a[j+1];
            }
        }
    }
    cout<<"Min num is "<<a[0]<<endl;
    cout<<"Max num is "<<a[size-1]<<endl;
}
int main()
{

int nums[]= {2,1,5,9,7,15,10};
int size = sizeof(nums)/sizeof(nums[0]);
minAndMax(nums,size);

    return 0;
}
