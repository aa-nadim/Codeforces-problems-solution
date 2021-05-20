///110100100010000100000100000010000000100000000
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,n;
    cin>>t;
    while(t--){
        cin>>k;
        n = (-1 + sqrt(double(8*k-7))) / 2.0;
        if(k == n*(n+1)/2+1)
            cout<<'1'<<endl;
        else
            cout<<'0'<<endl;
    }
    return 0;
}
