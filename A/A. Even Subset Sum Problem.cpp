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
        int n;cin>>n;int b,a[n];
        int sum=0,temp,temp1;
        bool flag,flag1;
        flag=flag1=false;
        if(n==1){
            cin>>b;
            if(b%2==0)
                cout<<1<<endl<<1<<endl;
            else
                cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0){
                    flag=true;temp=i;
                }
                sum+=a[i];
                if(sum%2==0){
                    flag1=true;temp1=i;
                }
            }
            if(flag)
            cout<<1<<endl<<2<<endl;
            else if(flag1){ cout<<temp1+1<<endl<<1<<" ";
            for(int i=1;i<=temp1;i++)
                cout<<2<<" ";
            cout<<endl;
            }
            else
                cout<<-1<<endl;
        }
    }




    return 0;
}


///...........Alhamdulillah.........///






