#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;
map<int,int>mp;
int gcd(int a,int b){
    if(b==0)return a;
    return (b,a%b);
}
int main()
{
    test{
            ll k,n,a,b;cin>>k>>n>>a>>b;
            if(n*b>=k)cout<<-1<<endl;
            else{
                ll x;
                x=(k-1-(n*b))/(a-b);
                if(x>n)x=n;
                cout<<x<<endl;
            }
    }return 0;
}

