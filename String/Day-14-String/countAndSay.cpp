/*Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
vector<int> v{3,3,2,2,2,5,1};
unordered_map<int,int> um={};
for(auto it: v){
    if(um.find(it)!=um.end()){
        um[it]++;
    }
    else{
        um[it]=1;
    }
}int num=0;
for(auto it:um){
     num=num*10;
     num=num+it.first;
     num=num*10;
     num=num+it.second;
} cout<<num<<endl;
int remainder,reversedNumber;
  while(num > 0) {
        remainder = num%10;
        reversedNumber = reversedNumber*10 + remainder;
        num /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 1;
}