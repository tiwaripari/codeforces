#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int num = 0;
        num = ((n * m) / 2) + ((n * m) % 2);
        cout << num << endl;
    }
}