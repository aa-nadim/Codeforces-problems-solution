#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int a,s=0;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
    }int c=0;
    for(int i=1;i<=5;i++){
        if((s+i)%(n+1)==1)c++;
    }
    cout<<5-c<<endl;
    return 0;
}

