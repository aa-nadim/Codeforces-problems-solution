#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long x,sE,sO,z;
        x=n/2;sE=x*(x+1);sO=(x-2)*(x-2);z=sE-sO;
        if(x%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2) cout<<i<<" ";
            if(z==0) cout<<1<<" "<<5<<endl;
            else{
                for(int i=1;i<n-3;i+=2) cout<<i<<" ";
                if((z/2)%2==0) cout<<z/2-1<<" "<<z/2+1<<endl;
                else cout<<z/2-2<<" "<<z/2+2<<endl;
            }



        }
    }
    return 0;
}
///...........Alhamdulillah.........///





