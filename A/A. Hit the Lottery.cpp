#include<bits/stdc++.h>
#define p long long int
using namespace std;

int main()
{
    p n,a,sum=0;
    cin>>n;

    if(n>=100)
    {
        a=n/100;
        sum=sum+a;
        n=n%100;
    }
    if(n<100 && n>=20)
    {
        a=n/20;
        sum=sum+a;
        n=n%20;
    }
    if(n<20 && n>=10)
    {
        a=n/10;
        sum=sum+a;
        n=n%10;
    }
    if(n<10 && n>=5)
    {
        a=n/5;
        sum=sum+a;
        n=n%5;
    }
    if(n<5 && n>0)
    {
        a=n/1;
        sum=sum+a;
    }
    cout<<sum<<endl;

    return 0;
}


