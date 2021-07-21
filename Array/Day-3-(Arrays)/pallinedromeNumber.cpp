#include <iostream>

using namespace std;

int main()
{
    int num; cin>>num;
    int newNum=0,temp=0;
         temp = num;
    while(temp>0){
        newNum=newNum*10;
        newNum += (temp%10);
        temp = temp/10;
    }
    cout<<"New num "<<newNum<<endl;
    if(newNum==num){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"Not pallindrome"<<endl;
    }

    return 0;
}