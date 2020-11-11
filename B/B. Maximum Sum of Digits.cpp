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
    ll n,a,b;cin>>n;
    int temp,sum=0;
    if(n%2==0){
        if(n/2>10){
            temp=(n/2)%10;
            a=n/2-(temp+1);
            b=n/2+(temp+1);
        }
        else{
            a=n/2+1;
            b=n/2-1;
        }
    }
    else{
        if(n/2>10){
            temp=(n/2)%10;
            a=n/2-(temp+1);
            b=n/2+(temp+2);
        }
        else{
            a=n/2;
            b=n/2+1;
        }

    }
    //cout<<a<<"\t"<<b<<endl;
    while (a != 0)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    //cout<<sum<<endl;
    while (b != 0)
    {
        sum = sum + b % 10;
        b = b / 10;
    }
    cout<<sum<<endl;

    return 0;
}
///Alhamdulillah............

