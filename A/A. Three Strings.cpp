/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
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
        string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    bool flag=true;
    for(int i=0;i<a.size();){
        if(a[i]==c[i] || b[i]==c[i]){
            i++;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
///Alhamdulillah............

