#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int x,a;
        if(n%2==0) a=2*k+n;
        else{
            for(int  i=3;i<=n;i+=2){
                if(n%i==0){
                    x=i;break;
                }
            }
            a=n+x+2*(k-1);
        }
        cout<<a<<endl;
    }
    return 0;
}
