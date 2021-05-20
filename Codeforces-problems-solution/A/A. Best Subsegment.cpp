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
    v99 n;cin>>n;
    v99 a[n];
    for(v99 i=0;i<n;i++){
        v99 c;cin>>c;
        a[i]+=c;
    }
    v99 t,x,y,p,q,temp;
    if(n>1){
        t=a[1]/2;
        x=1;y=2;

        for(v99 i=2;i<n;i++){
            //p=a[i]/(i+1);
            if(a[i]/(i+1)>t){
                y=i+1;x=1;
                t=a[i]/(i+1);
            }
            for(v99 j=0;j<i-1;j++){
                //q=(a[i]-a[j])/(i-j);
                if((a[i]-a[j])/(i-j)>t){
                    y=i+1;x=j+1;
                    t=(a[i]-a[j])/(i-j);
                }
            }
        }cout<<y-x+1<<endl;
    }
    else cout<<1<<endl;

    return 0;
}///...........Alhamdulillah.........///

