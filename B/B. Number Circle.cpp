#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
        sum=sum+arr[i];

    if(arr[n-1]<sum){
        cout<<"YES"<<endl;
        for(int i=n-1;i>(n/2);i--){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<(n/2);i++)
            cout<<arr[i]<<" ";
        cout<<arr[n/2]<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}
