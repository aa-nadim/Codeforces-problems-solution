#include<bits/stdc++.h>
using namespace std;
typedef long long v99;

int main()
{
    int t,k=1;cin>>t;
    while(t--){
        int n,s=0;cin>>n;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            s+=a;
        }
        cout<<"Case "<<k++<<": "<<s<<endl;

    }
    return 0;
}


