#include<iostream>
#include<string>
using namespace std;

int main(){
int num=123;
int temp=num;
int reverseNum=0;
int remainder;
while(temp>0){
    remainder=temp%10;
    reverseNum=(reverseNum*10)+remainder;
    temp=temp/10;
}
cout<<reverseNum;
return 1;
}