#include<iostream>
using namespace std;
int main(){
     int arr[]={87 ,78 ,16 ,94};
        int size = sizeof(arr)/sizeof(arr[1]);
     for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}