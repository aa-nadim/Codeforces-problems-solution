#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n+1),v;a[0]=0;v.push_back(0);
        for(int i=1;i<=n;i++)cin>>a[i],v.push_back(a[i]);
        sort(v.begin(),v.end());

        if(a==v)cout<<0<<endl;
        else{
            int j=n,s=0,c=0,i;
            while(1){
                if(a[j]>a[j-1] || a[j-1]==0){i=j;break;}
                else j--,s++;
            }
            while(1){
                if(a[i]<a[i-1] || a[i-1]==0){break;}
                else i--,c++;
            }
            int p=min(s,c);
            int ans=n-(2*p+1);
            if(p==0)ans=n-2;
            cout<<ans<<endl;
        }
    }
    return 0;
}

