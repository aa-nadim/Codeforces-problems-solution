#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k1,k2,a[100],b[100];
    cin>>n>>k1>>k2;
    for(int i=0;i<k1;i++)
        cin>>a[i];
    sort(a,a+k1);
    for(int i=0;i<k2;i++)
        cin>>b[i];
    sort(b,b+k2);
    if(a[k1-1]==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
