#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a,b,c,d,e;
    cin>>s;
    cin>>a>>b>>c>>d>>e;

    if(s[0]==a[0] || s[0]==b[0] || s[0]==c[0] || s[0]==d[0] || s[0]==e[0])
        cout<<"YES"<<endl;
    else if(s[1]==a[1] || s[1]==b[1] || s[1]==c[1] || s[1]==d[1] || s[1]==e[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

