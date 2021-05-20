#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s,str;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    sort(s.begin(),s.end());

    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            str.push_back(s[i]);
        }
    }
    if(s[s.length()-1]=='z')
        str.push_back(s[s.length()-1]);

    if(str.length()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
