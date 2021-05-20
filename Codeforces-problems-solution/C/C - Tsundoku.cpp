#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
const double pi=acos(-1.0);
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        ll n,m,k;cin>>n>>m>>k;
        queue<int>a,b;
        for(ll i=1;i<=n;i++){
            ll x;cin>>x;a.push(x);
        }
        for(ll i=1;i<=m;i++){
            ll x;cin>>x;b.push(x);
        }
        int c=0;
        while(1){
            if((k<a.front() && k<b.front()) || (a.size()==0 && b.size()==0))break;
            if(b.front()>=a.front() && k>=a.front()){
                k-=a.front();a.pop();
            }
            else if(k>=b.front()){
                k-=b.front();b.pop();
            }
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

