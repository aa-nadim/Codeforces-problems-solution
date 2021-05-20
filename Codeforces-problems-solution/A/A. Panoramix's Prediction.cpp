#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    v99 n,m,x;cin>>n>>m;
    for(int p=n+1;p<=m;p++){
        int flag=1;
        for (int i=2;i<=sqrt(p);i++){
            if (p%i==0){
                flag=0;break;
            }
        }
        if(flag==1){
            x=p;break;
        }
    }
    if(x==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

