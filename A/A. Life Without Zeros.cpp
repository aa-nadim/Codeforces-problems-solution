///.................................///
///...BISMILLAHIR RAHMANIR RAHEEM...///
///.................................///
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

int nadim(int x)
{
    int t=1,sum=0;
    while(x){
        if(x%10){sum+=t*(x%10);t*=10;}
        x/=10;
    }
    return sum;
}

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    cout<<(nadim(a)+nadim(b)==nadim(c)?"YES":"NO");
    return 0;
}


///...............Nadim.............///
///...........Alhamdulillah.........///




