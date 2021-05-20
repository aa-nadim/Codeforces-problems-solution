#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=9;cin>>n;
    c=n>9?++c:c;
    while(n>9){
        c+=9-n%10;
        n/=10;
    }
    cout<<c;
}

