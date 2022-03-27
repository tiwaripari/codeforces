#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    long long int arr[n]={};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
   long long int k=0,start=0,flag1=0,flag=1;
    while(flag==1)
    {
        int flag1=0;
        for(int i=1;i<n;i++)
       {
        if(arr[i]>arr[i+1])
        {

            flag1=1;
            k=i;
            start=k;
            while(arr[k]>arr[k+1]&&k<n)
            {

                int temp;
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
                k+=2;
            }
            if(k!=i)
            {
                cout<<start<<" "<<(k-1)<<endl;
            }

        }
        if(flag1==1)
        {
            break;
        }

       }
        if(flag1==1)
        {
           flag=1;
        }
        else if(flag1==0)
        {
            flag=0;
        }

    }

    return 0;
}
