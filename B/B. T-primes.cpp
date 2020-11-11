/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include <iostream>
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

main()
{
    bool flag=false;
    vector<int>prime;
    int c;
    ll n,i,t,j;cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
                prime.push_back(a[i]);
          }
     }
     for(i=0;i<n;i++){
        for(j=0;j<prime.size();j++){
            if(a[i]==prime[j]*prime[j]){
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
     }
}
///Alhamdulillah............



