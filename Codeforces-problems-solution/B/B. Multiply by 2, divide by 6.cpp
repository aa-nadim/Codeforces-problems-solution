#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define mx 999999999
map<ll,ll>visit;
int main()
{
    test
    {
        ll n;cin>>n;
        ll x=0;
        while(1){
            if(n==1)break;
            if(n%6==0 && n/6>0 && visit[n/6]==0){
                visit[n/6]++;n/=6;
            }
            else if(n*2<mx && visit[n*2]==0){
                visit[n*2]++;n*=2;
            }
            else{
                x=-1;break;
            }
            x++;
        }
        cout<<x<<endl;
        visit.clear();
    }
    return 0;
}

