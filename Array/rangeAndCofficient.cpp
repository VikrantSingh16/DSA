/******************************************************************************
Range and Coefficient of range of Array
*******************************************************************************/
#include <iostream>
using namespace std;
void coefficientofRanger(double a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
double Icoefficient = (a[size-1]-a[0])/(a[size-1]+a[0]);
cout<<"Range : "<<a[size-1]-a[0]<<endl;
cout<<"Coefficient "<<Icoefficient<<endl;
cout<<"Max "<<a[size-1]<<endl;
cout<<"Min "<<a[0]<<endl;
}

int main()
{
    double a[] = {15, 16, 10, 9, 6, 7, 17};
    int size = sizeof(a)/sizeof(a[1]);
    coefficientofRanger(a,size);
    return 0;
}