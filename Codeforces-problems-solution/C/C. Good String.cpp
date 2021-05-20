#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);

string s;
int n;
string str;
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    //test
    //while(1)
    {
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(str.back()!=s[i] || str.size()%2==0)
                str.push_back(s[i]);
        }
        if(str.size()&1)str.pop_back();
        cout<<n-int(str.size())<<endl<<str<<endl;
    }
    return 0;
}

