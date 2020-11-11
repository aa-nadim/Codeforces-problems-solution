#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
            int n;cin>>n;
            int a[n],e=0,c=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0)e++;
            }
            int o=n-e;
            if(n==1 && a[0]%2==0){
                cout<<0<<endl;continue;
            }
            if(n==1 && a[0]%2!=0){
                cout<<-1<<endl;continue;
            }
            if(e==o || e==o+1){
                for(int i=0;i<n;i++){
                    if(i%2==0 && a[i]%2==1)c++;
                }
                cout<<c<<endl;continue;
            }
            else{
                cout<<-1<<endl;continue;
            }
    }return 0;
}


