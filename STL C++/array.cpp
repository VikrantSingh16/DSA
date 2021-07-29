//STATIC ARRAY
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5> a={2,1,4,-1,0};
   //Size of the Array size()
    int size=a.size();
    //Traversing the Array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    //element at kth (2) index at() functions returns the element on that index
    cout<<a[2];
    cout<<a.at(2);
    //Check Empty Array ? // empty() returns boolean value 
    cout<<a.empty();
    //check first and last element of an arrray front() and back()
    cout<<"First element "<<a.front()<<", Last element "<<a.back();

    return 1;
}