#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],sum,s,l,count;
    cin>>n;sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    //cout<<sum<<endl;
    sort(arr,arr+n);
    l=sum;count=s=0;
    for(int i=n-1;i>=0;i--){
        s+=arr[i];
        l-=arr[i];
        count++;
        if(s>l){
            break;
        }
    }
    cout<<count<<endl;

    return 0;
}
