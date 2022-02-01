#include<iostream>
using namespace std;
int main()
{
   long long int t,m,n;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        int count1=0;
        if(n%m!=0)
        {
            cout<<(((n/m)+1)*m)-n<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
