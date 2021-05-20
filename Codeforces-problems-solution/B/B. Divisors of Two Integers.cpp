#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],x,y,b[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    x=arr[n-1];
    int k=0;
    for(int i=0;i<n;i++){
        if(x%arr[i]==0 && arr[i-1]!=arr[i]) continue;
        else b[k++]=arr[i];
    }
    y=b[k-1];
    cout<<x<<" "<<y<<endl;
    return 0;
}
