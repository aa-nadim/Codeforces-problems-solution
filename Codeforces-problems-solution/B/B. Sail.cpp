#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,x2,y1,y2;cin>>t>>x1>>y1>>x2>>y2;
    string s;cin>>s;
    int X=x2-x1;
    int Y=y2-y1;
    if(X==0&&Y==0)return! cout<<0;
    for(int i=0;i<s.length();i++){
        if(X>0&&s[i]=='E')X--;
        if(X<0&&s[i]=='W')X++;
        if(Y>0&&s[i]=='N')Y--;
        if(Y<0&&s[i]=='S')Y++;
        if(X==0&&Y==0)return! cout<<i+1;
    }
    return! cout<<-1;
}
