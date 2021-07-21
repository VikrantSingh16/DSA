#include<iostream>
#include<vector>
using namespace std;
int find_median(vector<int> &v)
		{
		    sort(v.begin(),v.end());
		    int mid = v.size()/2;
		    if(v.size()%2!=0){
		    return v[mid];
}
else{
    return (v[mid]+v[mid-1])/2;
    }
		}
int main(){
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
cout<<find_median(v);
return 0;
}