#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0,zero=0,j;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='n')
           one++;
        if(s[i]=='z')
            zero++;
    }
    for(j=1;j<=one;j++){
        cout<<1<<" ";
    }
    for(j=1;j<=zero;j++){
        cout<<0<<" "<<endl;
    }
    return 0;

}
