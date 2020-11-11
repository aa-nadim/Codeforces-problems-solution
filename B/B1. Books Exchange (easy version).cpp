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
    test{
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    ///if(a[i]==j && i==j){    c++;cout<<c<<endl;c=0;break;}
                    if(a[i]==j){

                        c++;i=a[j];break;
                    }
                }
            }
        }
    }
    return 0;
}///...........Alhamdulillah.........///

