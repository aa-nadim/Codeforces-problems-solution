#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,count=0;string s;
        cin>>n;cin>>s;
        int i=1;
        while(i<=s.length()){ bool flag=false;
            for(int j=0;j<s.length()-1;){
               if(s[j]=='A' && s[j+1]=='P'){
                   s[j+1]='A';
                   flag=true;
                   j+=2;
               }
               else j++;
            }
            if(flag==true) count++;
            i++;
        }
        cout<<count<<endl;
    }
}
