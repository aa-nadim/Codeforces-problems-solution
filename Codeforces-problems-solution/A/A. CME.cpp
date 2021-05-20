#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    long long int n;
    cin>>q;
    while(q--){
        cin>>n;
        if(n==2)
            cout<<2<<endl;
        else {
            if(n%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }
    return 0;
}

