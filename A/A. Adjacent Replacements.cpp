#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2!=0) cout<<x<<" ";
        else cout<<x-1<<" ";
    }cout<<endl;
    return 0;
}
