///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink,lime,salt,toasts;
    drink=(k*l)/nl;
    lime=c*d;
    salt=p/np;
    toasts=min(drink,min(lime,salt));
    cout<<toasts/n<<endl;
    return 0;
}///...........Alhamdulillah.........///

