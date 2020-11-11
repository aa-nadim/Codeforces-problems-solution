#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m;
    cin>>n>>k;
    m=n/k;
    if(m%2!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
