#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,j=0,sum=0;
    cin>>n;
    long long int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort (arr,arr+n);
///  output system.......................

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            j++;
            arr[i+1]=arr[i+1]+1;
        }
        else
        {
            if(arr[i]>arr[i+1])
            {
               int x=arr[i] -arr[i+1];
               j+=x;
               j++;
               arr[i+1]=arr[i+1]+x+1;
            }
        }


    }

    cout<<j<<endl;

    return 0;
}
