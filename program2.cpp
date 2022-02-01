#include<iostream>
using namespace std;
int main()
{
    long long int a,num=1;
    cin>>a;
    long long int n=a;
    while(n>0)
    {
        n=n/10;
        num=num*10;
    }

    if(num==10)
    {
        cout<<1;
    }

    else
    {

        num=num/10;
        cout<<(((a/num)+1)*num)-a<<endl;
    }
    return 0;
}
