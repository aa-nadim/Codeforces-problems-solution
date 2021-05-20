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
    int n;cin>>n;
    int ma,mi;
    int arr[100],brr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr,brr+n);
    for(int i=0;i<n;i++){
        if(brr[0]==arr[i]){
            mi=i;
        }
    }cout<<mi<<endl;
    for(int i=0;i<n;i++){
        if(brr[n-1]==arr[i]){
            ma=i;
            break;
        }
    }cout<<ma<<endl;
    if(mi>ma)
        cout<<(ma+n)-(mi+1)<<endl;
    else if(ma>mi)
        cout<<(ma+n)-(mi+2)<<endl;
    else
        cout<<0<<endl;


    return 0;
}
///Alhamdulillah............





