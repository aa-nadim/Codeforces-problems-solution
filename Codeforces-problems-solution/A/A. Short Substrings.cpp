#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999

vector<int>v;
map<int,int>mp;
map<int,int>::iterator it;

int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        for(int i=0;i<s.length();i+=2){
            cout<<s[i];
        }
        if((s.length()-1)%2!=0)cout<<s[(s.length()-1)]<<endl;
    }
    return 0;
}

