#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n,s;cin>>n>>s;
    if(s<2*n) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=1;i<n;i++) cout<<"2 ";
        cout<<s-2*(n-1)<<endl;
        cout<<1<<endl;
    }
    return 0;
}


