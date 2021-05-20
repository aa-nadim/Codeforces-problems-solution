#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k,i,j;cin>>n>>k;
        int a[n],b[n],sum=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(b,b+n);
        for(i=0,j=n-1;i<n;i++,j--){
            if(b[j]>a[i] && i<k){
                sum+=b[j];
            }
            else
                sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

