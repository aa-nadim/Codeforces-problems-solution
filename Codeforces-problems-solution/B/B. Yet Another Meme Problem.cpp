#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    long long  int a,l;
     string b;
     cin>>a>>b;
     l=b.size();
     sort(b.begin(),b.end());
     //cout<<b[0]<<" "<<b[l-1];
     if(b[0]=='9')
        cout<<a*l<<endl;
     else
        cout<<a*(l-1)<<endl;
    }
}
