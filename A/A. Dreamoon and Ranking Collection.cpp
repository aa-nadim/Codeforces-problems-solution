///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

//*****************Data type**********************//
typedef long long ll;
typedef long long int lli;
typedef unsigned long long  ull;
typedef unsigned long long int ulli;

//****************SET**************************//
typedef set<int> SI;
typedef set<string> SS;
typedef set<char>SC;
typedef multiset<int>MSI;

//*****************Map****************************//
typedef map<int, int> mp;
typedef map<int, string> mps;
typedef map<int, char>mpc;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;

//****************Pair****************************//
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;
typedef pair<int, string> pis;
typedef pair<int, char> pic;

//*****************Vector************************//
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<lli> VLLI;
typedef vector<VI> VVI;
typedef vector<pii> VPI;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,x,y,i,temp,sum,p,count=0;cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    i=p=sum=y=0;temp=0;
    while(i<n){
        sum=a[i]-p;
        if(sum>1) temp+=(sum-1);
        if(x<=temp) {y=a[i];break;}
        p=a[i];
        i++;
    }
    if(x<=temp) cout<<y<<endl;
    else cout<<a[n-1]+x-temp<<endl;
    }


    return 0;
}


///...........Alhamdulillah.........///





