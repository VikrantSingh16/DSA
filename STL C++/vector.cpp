//Dynamic Array
/*how it works : basically when ever the size of the array is full it creates a new array
twice of that array size and copy the element from old array to new array later dumps the old array*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //intial size
   //to know the capacity we use capacity() : returns the total size of that array
   cout<<"size: "<<v.capacity()<<endl;
   //push element in the array push_back() : push the element inside brackets
   v.push_back(3);
 v.push_back(4);
 v.push_back(6);
 v.push_back(-1);
 //to knoow the total elements present in the array size(): returns total elements
cout<<v.size()<<endl;
    //to access a particular index at(): return the element in that index
    cout<<"at index 1 element is "<<v.at(1)<<endl;
    //front() and back() returns first and last element of that array
cout<<"first: "<<v.front();
//to remove elemeent from last element we use pop_back()
v.pop_back();
//to clear the elements in the array complety we use clear()but note only the elements are gone size()=0 but capacity does not descrease capact !=0
//v.clear();
 //to fix the size of elements in vecotr and intialize it with one variables in each position we do like this
 vector<int> v1(5,1); //fix size to 5 with eeach element 1
 //to copy elements from old vector to a new vector we use newVectorName(oldVectorName)
 vector<int> v2(v);
 cout<<"IN V2: "<<endl;
 for(int i=0;i<v2.size();i++){cout<<v2[i]<<" ";}
    return 1;
}