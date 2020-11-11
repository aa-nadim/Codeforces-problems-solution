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
    bool flag=true;
    int n,r[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(r[i]!=b[i])
            flag=false;
    }
    if(flag){
        cout<<-1<<endl;
    }
    else{
        int t,s1,s2;
        for(int i=0;i<n;i++){
            t=i+1;
            s1=s2=0;
            for(int j=0;j<n;j++){
                if(r[j]!=b[j] && b[j]==0){
                    s1+=t*r[j];
                    s2+=t*b[j];
                }

                else{
                    s1+=r[j];
                    s2+=b[j];
                }
            }
            if(s1>s2){
                break;
            }
        }
        cout<<t<<endl;
    }



    return 0;
}
///Alhamdulillah............

