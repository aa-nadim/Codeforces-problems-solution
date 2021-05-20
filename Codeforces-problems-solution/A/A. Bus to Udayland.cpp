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
    bool flag=false;
    int n;cin>>n;
    char ch[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++)
            cin>>ch[i][j];
        //cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(ch[i][j]=='O' && ch[i][j+1]=='O'){
               ch[i][j]=ch[i][j+1]='+';
               flag=true;
               break;
            }
        }
        if(flag==true)
            break;
    }
    if(flag==true){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++)
                cout<<ch[i][j];
            cout<<endl;
        }
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
///Alhamdulillah............






