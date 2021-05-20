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

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    //test
    {
        string s,t;cin>>s>>t;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i])c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

