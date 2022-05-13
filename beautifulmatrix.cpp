#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[5][5] = {};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int steps = 0, row = 0, col = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    steps = abs(row - 2) + abs(col - 2);
    cout << steps;
    return 0;
}