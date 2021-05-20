#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        v99 a,b;cin>>a>>b;
        v99 x=min(a,b);
        v99 y=max(a,b);
        if(a==b)cout<<0<<endl;
        //else if(y%2!=0 && y%4!=0 && y%8!=0) cout<<-1<<endl;
        else{
            v99 i=0;
            while(1){
                if(y%8==0)y/=8;
                else if(y%4==0)y/=4;
                else if(y%2==0)y/=2;
                else{
                    i=-1;break;
                }
                i++;
                if(y==x)break;
            }
            cout<<i<<endl;
        }
    }
    return 0;
}

