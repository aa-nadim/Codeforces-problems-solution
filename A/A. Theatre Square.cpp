#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    if(a>=n && a>=m)
        cout<<1<<endl;
    else if(a>=n && a<m){
        if(m%a==0)
            cout<<m/a<<endl;
        else
            cout<<(m/a)+1<<endl;
    }
    else if(a>=m && a<n){
        if(n%a==0)
            cout<<n/a<<endl;
        else
            cout<<(n/a)+1<<endl;
    }
    else if(a<n && a<m){
        if(n%a==0 && m%a==0)
            cout<<(n/a)*(m/a)<<endl;
        else if(n%a==0 && m%a!=0)
            cout<<(n/a)*((m/a)+1)<<endl;
        else if(m%a==0 && n%a!=0)
            cout<<(m/a)*((n/a)+1)<<endl;
        else if(n%a!=0 && m%a!=0)
            cout<<((n/a)+1)*((m/a)+1)<<endl;
    }



    return 0;
}
