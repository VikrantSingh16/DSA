#include<iostream>
#include<math.h>
using namespace std;

int countSquares(int N) {
       int a =sqrt(N);
       if(a*a==N) return a-1;
       else return a;
}
int main() {
   cout<<countSquares(20);
    return 0;
}