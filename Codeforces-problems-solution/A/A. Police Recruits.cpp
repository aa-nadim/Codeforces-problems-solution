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
    int n;cin>>n;
    int a[n],po,count;po=count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]!=-1){
            po+=a[i];
        }
        else{
            po-=1;
        }
        if(po<0){
            count++;
        }
        if(a[i]==-1 && a[i+1]!=-1){
             po=0;
        }
    }
    if(a[n-1]!=-1) cout<<count<<endl;
    else if(po>0)   cout<<count<<endl;
    else cout<<count+1<<endl;
    return 0;
}


///...........Alhamdulillah.........///





