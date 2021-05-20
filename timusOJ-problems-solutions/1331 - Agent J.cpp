#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
typedef long long v99;
const double pi = acos(-1.0);

int main()
{
    int i,test;

    double r1,r2,r3,x,y,z,X,Y,Z,area,A,s;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        x = r2 + r3;
        y = r1 + r3;
        z = r1 + r2;
        s=(x+y+z)/2;
        A=sqrt(s*(s-x)*(s-y)*(s-z));
        X = acos((y*y+z*z-x*x)/(2*y*z));
        Y = acos((z*z+x*x-y*y)/(2*x*z));
        Z = acos((x*x+y*y-z*z)/(2*x*y));

        area=A-(0.5)*(r1*r1*X+r2*r2*Y+r3*r3*Z);

        printf("Case %d: %lf\n",i,area);
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

