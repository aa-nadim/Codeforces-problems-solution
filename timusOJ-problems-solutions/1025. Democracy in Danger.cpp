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
    int n;cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<=n/2;i++){
        s+=a[i]/2+1;
    }
    cout<<s<<endl;
    return 0;
}


///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11
///...........Alhamdulillah.........///

