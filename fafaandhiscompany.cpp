#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int c = 0;
    for (int i = 2; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    cout << c + 1;
    return 0;
}
