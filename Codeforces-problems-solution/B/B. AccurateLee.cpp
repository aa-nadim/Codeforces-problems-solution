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
int main()
{
    test{
            ll n;cin>>n;
            string s,str;cin>>s;str=s;
            sort(str.begin(), str.end());
            if(s==str)cout<<s<<endl;
            else{
                for(ll i=0;i<n;i++){
                    if(s[i]!='1')cout<<0;
                    else{
                        cout<<0;break;
                    }
                }
                for(ll i=n-1;i>=0;i--){
                    if(s[i]=='1')cout<<1;
                    else break;
                }cout<<endl;
            }
    }return 0;
}


