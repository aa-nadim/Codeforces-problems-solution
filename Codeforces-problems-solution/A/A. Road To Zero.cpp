#include<bits/stdc++.h>
using namespace std;
long long  x,y,a,b,r,s1,s2,c,s3=1000000009;
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>x>>y;       c=min(x,y);
        cin>>a>>b;       r=abs(x-y);
        s1=r*a+c*b;
        s2=(x+y)*a;
        cout<<min(s1,s2)<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///





