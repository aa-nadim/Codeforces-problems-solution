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
            string s;cin>>s;
            int one=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='1')one++;
            }
            int x=min(one,(int)(s.length()-one));
            if(x%2)cout<<"DA"<<endl;
            else cout<<"NET"<<endl;
    }return 0;
}


