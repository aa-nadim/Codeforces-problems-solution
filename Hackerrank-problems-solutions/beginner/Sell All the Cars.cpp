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
        v99 n;cin>>n;
        v99 a[n],t;
        for(v99 i=0;i<n;i++){
            cin>>a[i];
        }sort(a,a+n);
        for(v99 i=0;i<n;i++){
            if(a[i]!=0){
                t=i;break;
            }
        }
        v99 sum=a[t],temp;
        for(v99 j=1,i=t+1;i<n;i++,j++){
             temp=a[i]-j;
             if(temp>=0) sum+=temp;
             else sum+=0;
        }
        cout<<sum<<endl;

    }
    return 0;
}


///...........Alhamdulillah.........///







