#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,multi;
    string str;
    cin>>n>>str;k=str.length();
    multi=1;
    while(n>1){
        multi=multi*n;
        n=n-k;
    }
    cout<<multi<<endl;

    return 0;
}
