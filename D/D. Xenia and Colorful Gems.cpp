/// BISMILLAHIR RAHMANIR RAHEEM
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;

int main()
{
    test
    {
        v99 r1,g1,b1,ma=10000000;cin>>r1>>g1>>b1;
        int r[r1],g[g1],bl[b1];
        v99 x,y,z,a,b,c;
        for(int i=0;i<r1;i++) cin>>r[i];sort(r,r+r1);
        for(int i=0;i<g1;i++) cin>>g[i];sort(g,g+g1);
        for(int i=0;i<b1;i++) cin>>bl[i];sort(bl,bl+b1);
        for(int i=0;i<r1;i++){
            for(int j=0;j<g1;j++){
                if(abs(r[i]-g[j])<ma){
                    ma=abs(r[i]-g[i]);
                    x=r[i];y=g[j];
                }
            }
        }
        ma=10000000;
        for(int i=0;i<b1;i++){
            if(abs(y-bl[i])<ma){
                z=bl[i];
            }
        }
        a=abs(x-y);b=abs(y-z);c=abs(z-x);
        cout<<a*a+b*b+c*c<<endl;
    }

    return 0;
}

///...........Alhamdulillah.........///








