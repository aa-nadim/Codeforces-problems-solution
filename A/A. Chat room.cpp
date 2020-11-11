#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int h,e,l,l2,o;
    h=e=l=l2=o=0;
    cin>>s;
    int i=0;
    while(s[i]!='h' && i<s.size())
        i++;
    h=i;
    i++;
    while(s[i]!='e' && i<s.size())
        i++;
    e=i;
    i++;
    while(s[i]!='l' && i<s.size())
        i++;
    l=i;
    i++;
    while(s[i]!='l' && i<s.size())
        i++;
    l2=i;
    i++;
    while(s[i]!='o'&&i<s.size())
        i++;
    o=i;
    i++;
    if(h<e && e<l && l<l2 && l2<o && h<s.size()&&e<s.size()&&l<s.size()&&l2<s.size()&&o<s.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
