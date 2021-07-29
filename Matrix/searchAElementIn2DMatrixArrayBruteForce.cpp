/*
Search a 2D Matrix
Medium
3906
212
Add to List
Share
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
*/
#include<iostream>
#include<vector>
#define n 3
#define m 4
using namespace std;
int main(){
int a[n][m]={1,3,5,7,10,11,16,20,23,30,34,60};
int ele=11;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(ele==a[i][j]){
            cout<<"found at position: "<<i+1<<" "<<j+1;
            break;           
        }
    }
    cout<<endl;
}
    return 0;

}