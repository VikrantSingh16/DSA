#include<iostream>
#include<vector>
using namespace std;
 int findDuplicate(vector<int>& nums) {
   sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
    }
int main(){
    vector<int> v1{2,3,4,1,8,0,3};
    cout<<findDuplicate(v1);
    return 0;
}