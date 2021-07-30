#include<iostream>
#include<map>
using namespace std;
int main(){
map <int,string> m{ {1,"Vikrant"},{2,"Yuvraj"},{3,"Shivangi"},{4,"Saini"} };
map <int,string>::iterator p=m.begin();
//to insert elements we use insert()
m.insert(pair<int,string>(5,"Shivangi"));
while(p!=m.end()){
    //to print value we use ->second
    cout<<p->second<<endl;
    //to print the key we use ->first
    cout<<p->first<<endl;
    p++;
}

    return 1;
}