#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int p,x,q,y;p=x=q=y=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            x+=b;p++;
        }
        else{
            y+=b;q++;
        }
    }
    if(10*p/2<=x) cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
    if(10*q/2<=y) cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
    return 0;
}
