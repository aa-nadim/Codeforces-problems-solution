#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];s+=a[i];
    }
    if(s>x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
