#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    int x,y;
    x=2*d+a*b;y=2*e+a*c;
    if(x==y) cout<<"Friendship"<<endl;
    else if(x<y) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}
