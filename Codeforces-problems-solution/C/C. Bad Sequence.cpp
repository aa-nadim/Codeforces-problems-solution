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
    //test
    //while(1)
    {
        int n;cin>>n;
        vector<int>v(n),vv;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=n-1;i>=0;i--)vv.push_back(i);

        for(int i=0;i<n;i++)cout<<vv[i];cout<<endl;
        if(v==vv)cout<<"yes"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

