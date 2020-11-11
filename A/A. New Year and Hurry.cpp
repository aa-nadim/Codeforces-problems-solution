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
    int n,k;
    cin>>n>>k;
    int a[n];
    a[0]=5;
    for(int i=1;i<n;i++){
        a[i]=a[i-1]+5*(i+1);
    }
    if((240-k)<5){
        cout<<0<<endl;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if((240-k)>=a[i]){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }

    return 0;

}
///Alhamdulillah............

