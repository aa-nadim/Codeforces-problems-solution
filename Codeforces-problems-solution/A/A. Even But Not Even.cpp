#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num=0;
    int n,sum=0;cin>>n;
    int arr[3000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        num=num*10+arr[i];
        sum+=arr[i];
    }
    if(num%2!=0 && sum%2==0){
        for(int i=0;i<n;i++){
        cout<<arr[i];
        }
    }


    return 0;
}
