#include <iostream>

using namespace std;

int main()
{
 int num = 9934416;
int reverseNum=0;
while(num>0){
   reverseNum = reverseNum*10;
    reverseNum = reverseNum + (num%10);
    num = num/10;
    }
cout<<"Reverse Num is "<<reverseNum;
    return 0;
}
