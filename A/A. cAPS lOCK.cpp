#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=1;i<str.length();i++){
            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
        }
    if(str[0]>='a' && str[0]<='z')
        str[0]-=32;
        for(int i=1;i<str.length();i++){
            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
        }
        cout<<str<<endl;
}
