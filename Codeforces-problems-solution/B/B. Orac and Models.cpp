#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        v99 n;cin>>n;
        v99 a[n+1],b[n+1],ans=1;
        for(v99 i=1;i<=n;i++){
            cin>>a[i];
            b[i]=1;
        }
        for(v99 i=1;i<=n;i++){
            for(v99 j=2;i*j<=n;j++){
                if(a[i*j]>a[i]){
                    b[i*j]=max(b[i*j],b[i]+1);
                }
            }
            ans=max(ans,b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
