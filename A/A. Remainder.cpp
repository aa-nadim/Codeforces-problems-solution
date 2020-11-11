#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
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
        int n,x,y;cin>>n>>x>>y;
        string str;cin>>str;
        int c=0;
        for(int i=n-1,j=0;j<y;i--,j++)if(str[i]=='1')c++;

        if(str[n-y-1]=='0')c++;//cout<<c<<endl;

        for(int i=n-y-2,j=y+1;j<x;i--,j++)if(str[i]=='1')c++;

        cout<<c<<endl;
    }
    return 0;
}

