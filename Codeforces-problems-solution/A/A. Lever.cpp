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
    string str;cin>>str;
    v99 t,l=str.length();
    for(v99 i=1;i<l-1;i++)
        if(str[i]=='^'){
            t=i;break;
        }

    v99 sum=0;
    for(v99 i=0;i<l;i++){
        if(str[i]>='0'&& str[i]<='9'){
            sum+=((v99)str[i]-'0')*(t-i);
        }
    }
    if(sum==0) cout<<"balance"<<endl;
    else if(sum>0) cout<<"left"<<endl;
    else cout<<"right"<<endl;
    return 0;
}///...........Alhamdulillah.........///

