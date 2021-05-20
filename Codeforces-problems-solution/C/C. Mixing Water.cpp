#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
typedef long long v99;
const double pi = acos(-1.0);


///while(scanf("%d %d",&a,&b)!=EOF)
int main()
{
    int te;cin>>te;
    while(te--){
        double h,c,t;cin>>h>>c>>t;
        double i,j,p;i=1;j=0;
        double ans,s=(i*h+j*c)/(i+j),d;
        ans=abs(s-t);
        while(1){
            j++;s=(i*h+j*c)/(i+j);d=abs(s-t);
            if(ans<d){
                p=i+j-1;break;
            }
            ans=min(ans,d);
            i++;s=(i*h+j*c)/(i+j);d=abs(s-t);
            if(ans<d){
                p=i+j-1;break;
            }
            ans=min(ans,d);
        }
        cout<<p<<endl;
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

