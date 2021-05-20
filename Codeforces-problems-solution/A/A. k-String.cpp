#import<bits/stdc++.h>
using namespace std;
int i,j,k,l,p[26];
string s;main()
{
    for(cin>>k>>s;s[i];)
        p[s[i++]-97]++;
    for(;j<26;)
        if(p[j++]%k)
            return cout<<-1,0;
    for(;l++<k;)
        for(i=26;i--;)
            for(j=0;j++<p[i]/k;)
                cout<<(char)(i+97);

}
