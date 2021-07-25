#include<iostream>
#include<unordered_set>
using namespace std;
int unionOfTwoArrays(int a[],int b[],int n,int m){
unordered_set<int> s;
for(int i=0;i<n;i++){
    s.insert(a[i]);
    s.insert(b[i]);
}
for (auto it =s.begin(); it != s.end(); ++it)
    {
        cout << *it<<" ";
    }
    cout<<endl;
return s.size();
}
int main(){
    int a[]={5,10,15,5};
    int b[]={10,15,5,4};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    cout<<unionOfTwoArrays(a,b,n,m)<<endl;
    return 0;
}