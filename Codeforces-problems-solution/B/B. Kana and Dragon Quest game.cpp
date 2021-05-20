#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        v99 x,n,m,p;cin>>x>>n>>m;p=m*10;
        bool flag=false;
        if(x<=p){
            flag=true;
        }
        else{
            for(int i=0;i<n;i++){
                x=floor(x/2)+10;
                if(x<=p){
                    flag=true;break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}







