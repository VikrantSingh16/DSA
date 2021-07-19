/*Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth 
smallest element in the given array. It is given that all array elements are distinct.
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
*/
#include<iostream>
using namespace std;
int kthEle(int a[],int size,int num){
for(int i=0;i<size-2;i++){
    for(int j=0;j<size-1-i;j++){
        if(a[j]>a[j+1]){
            a[j]=a[j]^a[j+1];
            a[j+1]=a[j]^a[j+1];
            a[j]=a[j]^a[j+1];
        }
    }
}
    return a[num-1];

}
int main(){
int arr[] = {7, 10, 4, 3, 20, 15};
int size = sizeof(arr)/sizeof(arr[1]);
cout<<"kth element in the array :"<<kthEle(arr,size,3);
}
