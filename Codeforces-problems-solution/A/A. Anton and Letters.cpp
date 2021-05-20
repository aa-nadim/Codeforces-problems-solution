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
    int temp;
    char s[1000];
    string c="";
    cin.getline(s, 1000);
    for(int i=0;s[i]!='\0';i++){
            temp=i+1;
        if(s[i]>='a' && s[i]<='z')
            c.push_back(s[i]);
    }
    //cout<<c<<endl;
    int count=0;
    if(temp>2){
        sort(c.begin(),c.end());
    for(int i=0;i<c.size()-1;i++){
        if(c[i]!=c[i+1])
            count++;
    }
    count++;
    cout<<count<<endl;
    }
    else
        cout<<0<<endl;


    return 0;
}
///Alhamdulillah............





