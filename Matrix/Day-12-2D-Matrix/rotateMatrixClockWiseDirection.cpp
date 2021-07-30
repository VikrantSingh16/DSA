/*Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.
Examples: 
Input:
1 2 3 
4 5 6
7 8 9  
Output:
7 4 1 
8 5 2
9 6 3
Input:
1 2
3 4
Output:
3 1
4 2 */
#include<iostream>
#define row 3
#define col 3
using namespace std;
int main(){
int a[row][col]={1, 2, 3, 
4, 5, 6,
7, 8 ,9};
int size=sizeof(a)/sizeof(a[0])*2;
for(int i=0;i<size;i++){
    for(int j=i;j<row;j++){
        if(i!=j){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col/2;j++){
      int temp=a[i][j];
      a[i][j]=a[i][col-1];
        a[i][col-1]=temp;
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

    return -1;
}