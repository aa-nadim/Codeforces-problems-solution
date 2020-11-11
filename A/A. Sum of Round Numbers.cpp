#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int i,x,k,a[n];i=1,k=0;
       while (n!=0) {
            if(n%10!=0){
                x=n%10;
                a[k++]=x*i;
            }
            i*=10;
            n=n/10;
        }
        cout<<k<<endl;
        for(int l=k-1;l>=0;l--) cout<<a[l]<<" ";
        cout<<endl;

    }
    return 0;
}

