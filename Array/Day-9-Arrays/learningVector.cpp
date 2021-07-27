#include<iostream>
#include<vector>
using namespace std;
int main(){
//intiliaze vector with 3 elements
vector <int>v1 {1,23,3};
//intilize vector with elements of same data
vector<int>v2{2,10};
//output [10,10];
//how to know the size
cout<<v1.capacity();
//to push elements in the back of the vector push_back()
v1.push_back(10); 
//to delete element from back of the vector pop_back()
v1.pop_back();
//to know the total elements in the vector size()
v1.size();
//to print vector elements
for(int i=0;i<v1.size();i++){
cout<<v1[i]<<" ";}
cout<<endl;
//to remove all the elements from vector clear()
// v1.clear();
//to returna value from an index of vector we use at()
// cout<<v1.at(1)<<endl;
 
//to return front and back element from a vector
// cout<<"Front: "<<v1.front()<<" back: "<<v1.back()<<endl;

   //to know the first index we use begin() and for end we can use end()
//can we insert element in the middle of vector yes by using iterator
vector <int>::iterator it=v1.begin();
v1.insert(it+1,10);
for(int i=0;i<v1.size();i++){
cout<<v1[i]<<" ";}
     return -1; 
}