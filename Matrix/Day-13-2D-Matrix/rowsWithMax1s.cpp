#include <iostream>
#define row 4
#define col 4
using namespace std;
int main()
{
    int prevCount = 0, maxCount, index = 0;
    int a[row][col] = {{0, 1, 1, 1},
                       {1, 1, 1, 1},
                       {1, 1, 1, 0},
                       {0, 0, 0, 0}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (a[i][j] == 1)
            {
                prevCount++;
            }
            if (prevCount > maxCount)
            {
                maxCount = prevCount;
                index = i;
            }
        }
        prevCount = 0;
    }
    cout << "The max 1s row is " << index;
    return 1;
}