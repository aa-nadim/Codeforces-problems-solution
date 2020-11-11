#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a,b,temp,max,min,v,T;

    cin>>T;
    while(T--)
    {
    cin>>n>>x>>a>>b;
    temp=fabs(a-b);
    if(a>b){max=a;min=b;}else{max=b;min=a;}
    v=n-temp;
    if((min==1 && max==n) || x==0)
        cout<<temp<<endl;

    else if(v>x)
        cout<<temp+x<<endl;
    else
        cout<<temp+v-1<<endl;
    }

    return 0;
}
