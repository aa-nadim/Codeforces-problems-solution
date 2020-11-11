#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;cin>>str;
    int small=0,capital=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            small++;
        else
            capital++;
    }
    if(small>=capital){
        for(int i=0;i<str.size();i++){
            if(str[i]<='Z')
                str[i]=str[i]+32;
            cout<<str[i];
        }cout<<endl;
    }
    else{
        for(int i=0;i<str.size();i++){
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            cout<<str[i];
        }cout<<endl;
    }
    return 0;
}

