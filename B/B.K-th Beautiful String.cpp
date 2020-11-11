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

int main()
{
    int t;cin>>t;
    while(t--){
        bool flag=false;
        ll n,k,x=1;
        cin>>n>>k;
        int r,c;
        r=n-2;c=n-1;
        for(ll i=n-2;i>=0;i--){
            for(ll j=n-1;j>0;j--){
                if(x==k){
                    flag=true;
                    break;
                }
                else if(i+1==j){
                    r=i-1;
                    x++;
                    break;
                }
                else{
                    c=j-1;
                    x++;
                }
            }
            if(flag)
                break;
        }
        for(ll i=0;i<n;i++){
            if(i==r || i==c)
                cout<<"b";
            else
                cout<<"a";
        }
        cout<<endl;
    }


    return 0;
}


///...............Nadim.............///
///...........Alhamdulillah.........///




