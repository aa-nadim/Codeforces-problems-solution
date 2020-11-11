#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='.'){
                if((i+j)&1) s[j]='W';
                else s[j]='B';
            }
        }
        cout<<s<<endl;
    }


    return 0;
}


