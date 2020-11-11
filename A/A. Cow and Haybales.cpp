///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const double pi = acos(-1.0);
///while(scanf("%d %d",&a,&b)!=EOF)
int main()
{

    int t;cin>>t;
    while(t--){
        int n,d;cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++){
            if(d>=a[i]*i){
                a[0]+=a[i];
                d-=(a[i]*i);
            }
            else{
                a[0]+=(d/i);
                break;
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}


///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11
///...........Alhamdulillah.........///

