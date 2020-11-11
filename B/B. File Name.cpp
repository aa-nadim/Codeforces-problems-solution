#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,n;cin>>n;
    string str;cin>>str;
    for(int i=0;i<str.length()-2;i++){
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x') count++;
    }
    cout<<count<<endl;
    return 0;
}
