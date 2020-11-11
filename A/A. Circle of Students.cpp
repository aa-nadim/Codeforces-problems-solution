//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    IOS
    v99 t;cin>>t;
    while(t--){
        v99 n,q=1;cin>>n;
        vector<v99>v;
        bool flag=true;
        for(v99 i=0;i<n;i++){
            v99 x;cin>>x;v.push_back(x);
        }
        for(v99 i=0;i<n;i++)v.push_back(v[i]);

        //for(v99 i=0;i<v.size();i++)cout<<v[i]<<whp;cout<<endl;

        for(v99 i=0;i<v.size();i++){
            if(v[i]==1){
                while(q==v[i]){
                    if(q==n){cout<<"YES"<<ses;flag=false;break;}
                    q++;++i;
                }
                break;
            }
        }
        q=1;
        if(flag){
            for(v99 i=v.size()-1;i>=0;i--){
                if(v[i]==1){
                    while(q==v[i]){
                        if(q==n){cout<<"YES"<<ses;flag=false;break;}
                        q++;--i;
                    }
                    break;
                }
            }
        }
        if(flag)cout<<"NO"<<ses;
    }
    return 0;
}
