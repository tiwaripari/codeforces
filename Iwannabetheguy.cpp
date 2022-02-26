#include<iostream>
using namespace std;
int main()
{
    int arr[101]={},count1=0,t=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        arr[i]=0;
    }
    for(int j=1;j<=2;j++)
    {
        int n=0,brr[101]={};
        cin>>n;
        if(n==0)
        {
            continue;
        }
        for(int k=1;k<=n;k++)
        {
            cin>>brr[k];
        }
        for(int k=1;k<=n;k++)
        {
            if(brr[k]==0)
            {
                continue;
            }
            arr[brr[k]]=1;
        }

    }

    for(int i=1;i<=t;i++)
    {

        if(arr[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            break;
        }
        else
        {
             count1=count1+1;
        }
    }
    if(count1==t)
    {
        cout<<"I become the guy."<<endl;
    }
    return 0;
}

