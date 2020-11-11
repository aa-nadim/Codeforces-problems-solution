/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
            cout<<a*k/2-b*k/2<<endl;
        else
            cout<<a*(k+1)/2-b*(k-1)/2<<endl;
    }
    return 0;
}
///Alhamdulillah............


