#include<iostream>
using namespace std;
int minJumps(int a[], int n){
        // Your code here
        int steps = n;
        int count = a[0];
        int jor=0;
        for(int i=0;i<n;i++){
            if(steps>=0){
                steps = steps - a[count];
                count = a[count];
                jor++;
            }
        }
    return jor;
        
    }
int main(){
    int a[] = {1, 5, 8, 10};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<minJumps(a,size)<<endl;
    return 0;
}