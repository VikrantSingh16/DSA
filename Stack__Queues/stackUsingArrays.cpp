#include<iostream>
#define size 50
using namespace std;
class stack{
public:
int stack[size];
int top = -1;
int length=0;
void push(int val){
top++;
stack[top]=val;
length++;
}
void pop(){
    top--;
    length--;
}
void peek(){
    cout<<"\n Top Element is "<<stack[top];
}
void display(){
    for(int i=0;i<length;i++){
cout<<stack[i]<<"-->";
    }
    cout<<"NULL\n";
}
};
int main()
{
 stack s;
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.display();
s.pop(); s.display();
s.peek();
s.push(22);
s.display();
s.peek();
  return 0;
}