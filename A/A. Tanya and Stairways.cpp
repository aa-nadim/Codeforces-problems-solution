#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int a[n+1],b[n],k=0;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i-1]!=0&&a[i]==1){
            b[k++]=a[i-1];
        }
    }b[k++]=a[n];
    cout<<k<<endl;
    for(int i=0;i<k;i++) cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
