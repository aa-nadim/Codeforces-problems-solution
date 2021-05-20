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
    string s;
    bool flag;
    int n,x=0;cin>>n;
    if(n==0) cout<<10<<endl;
    else if(n==1) cout<<1<<endl;
    else{
        flag=true;
        while(flag && n!=1){
            flag=false;
            for(int i=9;i>1;i--){
                if(n%i==0){
                    flag=true;
                    s+=(char)('0'+i);
                    n/=i;
                    break;
                }
            }
        }
    }
    reverse(s.begin(),s.end());
    if(!flag) cout<<-1<<endl;
    else cout<<s<<endl;
    return 0;
}
