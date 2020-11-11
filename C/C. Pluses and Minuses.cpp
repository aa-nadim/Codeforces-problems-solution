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
    //test{
            string s;cin>>s;
            ll res=0;
            ll i=0,cur;
            while(1){
                cur=i;
                bool ok=true;
                for(ll j=1;j<=s.length();j++){
                    res++;
                    if(s[i]=='+')cur++;
                    else cur--;
                    if(cur<0){
                        cout<<cur<<endl;
                        ok=false;break;
                    }
                }
                if(ok)break;i++;
            }
            cout<<res<<endl;
    //}return 0;
}



