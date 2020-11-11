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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int p,q,r,s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                r=i;
            }
        }
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='*'){
                p=i;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    flag=false;
    s=-1;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(a[i][j]=='*' && j>s){
                s=j;
                //flag=true;
                break;
            }

        }
    }
    q=50;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='*' && j<q){
                q=j;
                //flag=true;
                break;
            }
        }
    }
    //cout<<r<<"\t"<<s<<endl;
    //cout<<p<<"\t"<<q<<endl;
    for(int i=p;i<=r;i++){
        for(int j=q;j<=s;j++){
            cout<<a[i][j];
        }cout<<endl;
    }
    return 0;
}
///Alhamdulillah............





