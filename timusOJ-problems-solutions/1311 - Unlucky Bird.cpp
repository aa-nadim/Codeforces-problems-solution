#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int i,test;
    double v1,v2,v3,a1,a2;
    double s1,s2,s3,d,t;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        s1=(v1*v1)/(2*a1);
        s2=(v2*v2)/(2*a2);
        d=s1+s2;
        t=max(v1/a1,v2/a2);
        s3=v3*t;

        printf("Case %d: %lf %lf\n",i,d,s3);
    }
    return 0;
}

