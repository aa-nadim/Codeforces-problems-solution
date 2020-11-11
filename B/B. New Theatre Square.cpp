#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
typedef long long v99;
const double pi = acos(-1.0);
int main()
{
    int t;cin>>t;
    while(t--){

    v99 n,m,x,y,a,c,d,b;
    cin>>n>>m>>x>>y;
    string str[n],s="";
    a=2*x;
    for(v99 i=0;i<n;i++){
        cin>>str[i];
    }
    d=0;c=0;
    for(v99 j=0;j<n;j++){
        s=str[j];
        s+="*";
        for(v99 i=0;i<m;i++){
            if(a>y && s[i]=='.' && s[i+1]=='.'){
                d++;i++;
            }
            else if(s[i]!='*'){
                c++;
            }
        }
            //continue;
    }
    cout<<c*x+d*y<<endl;
    }
    return 0;
}
