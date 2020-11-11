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
                string s;cin>>s;
                int l=s.length(),one,zero,ans=0;
                if(l>2){
                    one=0;zero=0;
                    for(int i=0;i<l;i++){
                        if(s[i]=='1')one++;
                        else zero++;
                    }
                    ans=min(one,zero);
                    if(one>=zero && (s[0]=='0'||s[l-1]=='0'))ans--;
                    else if(one<zero && (s[0]=='1'||s[l-1]=='1'))ans--;

                }
                cout<<ans<<endl;
    }
    return 0;
}


///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11
///...........Alhamdulillah.........///

