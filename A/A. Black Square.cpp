#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    string str;cin>>str;
    int sum=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1') sum+=a;
        else if(str[i]=='2') sum+=b;
        else if(str[i]=='3') sum+=c;
        else sum+=d;
    }
    cout<<sum<<endl;

    return 0;
}
