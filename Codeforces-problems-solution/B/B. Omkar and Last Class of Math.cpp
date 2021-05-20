#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);

int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    test
    //while(1)
    {
        ll n,x=0;cin>>n;
        if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
        else{
            for(ll i=2;i*i<=n;i++)if(n%i==0){x=i;break;}
            if(x!=0)cout<<n/x<<" "<<n-(n/x)<<endl;
            else cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}

