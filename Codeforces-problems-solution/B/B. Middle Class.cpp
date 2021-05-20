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
        v99 n,x;cin>>n>>x;
        v99 a[n],sum,count;
        for(v99 i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[n-1]<x) cout<<0<<endl;
        else{
            sum=count=0;
            for(v99 j=1,i=n-1;i>=0;i--){
                sum+=a[i];
                if(sum>=j*x) {
                    count++;
                }
                else break;
                j++;
            }
            cout<<count<<endl;
        }


    }
    return 0;
}


///...........Alhamdulillah.........///







