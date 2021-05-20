#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,t;
    double x;
    cin>>t;
    while(t--){
        cin>>m>>n;
        x=(m*n)/2.0;
        cout<<ceil(x)<<endl;
    }
    return 0;
}
