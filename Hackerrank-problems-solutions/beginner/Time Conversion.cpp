/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<ctype.h>
#include <string.h>
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
    int a,p,l;
    string s,str;
    cin>>s;
    l=s.length();
    if(s[0]=='1' && s[1]=='2' && s[l-2]=='A'){
        s[0]-=1;
        s[1]-=2;
        str=s;
        //cout<<s<<endl;
    }
    else if(s[0]=='1' && s[1]=='2' && s[l-2]=='P'){
        str=s;
        //cout<<s<<endl;
    }
    else if(s[l-2]=='A'){
        //cout<<s<<endl;
        str=s;
    }
    else{
        a=10*(s[0]-48)+(s[1]-48);
        p=12+a;
        s[0]=p/10+48;
        s[1]=p%10+48;
        str=s;
        //cout<<s<<endl;
    }
    for(int i=0;i<l-2;i++){
        cout<<str[i];
    }cout<<endl;

    return 0;
}
///Alhamdulillah............

