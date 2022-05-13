#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, count = 0;
        int arr[3] = {};
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0], min = arr[0];

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == max)
            {
                count++;
            }
        }
        if (count < 2)
        {
            cout << "NO" << endl;
        }
        else if (count >= 2)
        {
            cout << "YES" << endl;
            cout << 1 << " " << max << " " << min << endl;
        }
    }
    return 0;
}