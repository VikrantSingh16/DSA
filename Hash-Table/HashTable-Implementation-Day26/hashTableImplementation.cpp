#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
 unordered_map<string,string> um;
 um["name"]="vikrant";
um["age"]="24";
um["laptop"]="MacBook Pro";
um["car"]="Aspire";
um.insert(make_pair("phone","PocoPhone F1"));
// for(auto it=um.begin();it!=um.end();it++){
//     cout<<"Key "<<it->first<<" value: "<<it->second<<endl;
// }
um.erase("phone");
cout<<um["vikrant"];
// for(auto m : um){
//     cout<<m.first<<" "<<m.second<<endl;
// }
if(um.find("lapto")==um.end()){
    cout<<"Not found";
}
else{
    cout<<"found";
}
 return 0;
}