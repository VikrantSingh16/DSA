#include<iostream>
using namespace std;
int pallArr(int a[],int size){
    int count = 0;
    int newNum=0;
    for(int i=0;i<size;i++){
        int temp = a[i];
       while(temp>0){
        newNum=newNum*10;
        newNum += (temp%10);
        temp = temp/10;
    }
    if(newNum==a[i]){
        count++;
    }
    newNum=0;
    }
    if(count==size){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a[]={121,131,141};
    int sizeOfA = sizeof(a)/sizeof(a[0]);
    cout<<"For Array a :" <<pallArr(a,sizeOfA)<<endl;;
    int b[]={122,133};
    int sizeOfB = sizeof(b)/sizeof(b[0]);
    cout<<"For Array b :"<<pallArr(b,sizeOfB);
    return 0;
}