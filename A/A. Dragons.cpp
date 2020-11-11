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
    int count=0;
    int s,n,t;
    cin>>s>>n;
    int a[n],b[n],temp[n];
    t=s;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        temp[i]=a[i];
    }
    sort(temp,temp+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && temp[i]==a[j]){

            }
        }cout<<b[i]<<" ";
    }cout<<endl;
    for(int i=0;i<n;i++){
        if(t>a[i]){
            t+=t+b[i];
        }
        else{
            count++;
        }
    }
    if(count==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
///Alhamdulillah............
