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
    char ch;cin>>ch;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./",str;cin>>str;
    int l=str.length();
    if(ch=='R'){
        for(int i=0;i<l;i++){
            for(int j=0;j<30;j++){
                if(str[i]==s[j]) cout<<s[j-1];
            }
        }cout<<endl;
    }
    else{
        for(int i=0;i<l;i++){
            for(int j=0;j<30;j++){
                if(str[i]==s[j]) cout<<s[j+1];
            }
        }cout<<endl;
    }


    return 0;
}///...........Alhamdulillah.........///

