#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int p[n+1];
    if(n%2==1) cout<<-1<<endl;
    else{
        int k=2;
        for(int i=1;i<=n;){
            p[i]=k;
            p[k]=i;
            i+=2;k+=2;
        }
        for(int i=1;i<=n;i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
    return 0;
}

