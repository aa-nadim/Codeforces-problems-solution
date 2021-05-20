#include <bits/stdc++.h>
using namespace std;
#define    ll             long long int
int main(){
        ll t;cin>>t;while(t--)
        {
           ll n;cin>>n;

                ll a[n],b[n],c[n];
                for(int i=0;i<n;i++)cin>>a[i];
                for(int i=0;i<n;i++)cin>>b[i];
                for(int i=0;i<n;i++)cin>>c[i];
                ll s=a[0],t=c[0];

                int i=0;
                    while(i<n){
                            if(i==n-1){
                                if(a[i]!=s && a[i]!=t){cout<<a[i]<<" ";}
                                else if(c[i]!=s && c[i]!=t){cout<<c[i]<<" ";}
                                else{cout<<b[i]<<" ";}
                            }
                            else{
                                if(a[i]!=t){cout<<a[i]<<" ";t=a[i];}
                                else if(c[i]!=t){cout<<c[i]<<" ";t=c[i];}
                                else{cout<<b[i]<<" ";t=b[i];}
                            }
                            i++;
                    }

                cout<<endl;
        }
return 0;
}



