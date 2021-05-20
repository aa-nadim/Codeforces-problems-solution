///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    string s;cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='.') cout<<0;
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i++;
        }
        else{
            cout<<2;
            i++;
        }
    }
    cout<<endl;
    return 0;
}///...........Alhamdulillah.........///

