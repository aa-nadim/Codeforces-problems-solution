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
    int n,arr[100];
    cin>>n;
    int odd,even;
    odd=even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2!=0)
            odd++;
        else
            even++;
    }
    if(odd==1){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }


    return 0;
}
///Alhamdulillah............



