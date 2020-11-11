///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)

typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    test
    {
        bool flag=true;
        int n,a,b;cin>>n;
        int p,c;p=0;c=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<p||b<c||a-p<b-c) flag=false;
            p=a;c=b;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


///...........Alhamdulillah.........///






