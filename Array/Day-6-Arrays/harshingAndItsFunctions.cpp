//Learning Hashing
#include <iostream>
#include<unordered_set>

using namespace std;
int main()
{
   unordered_set<int> s;
   s.insert(5);
   s.insert(7);
   s.insert(5);
  //Finding elements in unordered_set
   if(s.find(7)==s.end()){
       cout<<"Not Found";
   }
   else{
       cout<<"Found"<<endl;
   }
   //Traversing through the unordered_set
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
}
//Size of unordered_set
cout<<endl;
cout<<"Beofore Deletion "<<s.size()<<endl;
//DeleteAllTheElements
s.clear();
cout<<"After Deletion "<<s.size()<<endl;
//Count
if(s.count(7)==0){
    cout<<"Not present";
}
else{
    cout<<"Present";
}
//Erase elements
s.erase(5);
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
}
//Erase
s.erase(s.begin(),s.end());
return 0;
}
    

