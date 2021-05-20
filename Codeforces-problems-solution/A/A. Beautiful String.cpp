#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count,l,T;cin>>T;
    while(T--){
        count=0;
        string str;
    cin>>str;l=str.length();
    if(str[0]=='?'&&str[1]!='a')str[0]='a';
    if(str[0]=='?'&&str[1]!='b')str[0]='b';
    if(str[l-1]=='?'&&str[l-2]!='a')str[l-1]='a';
    if(str[l-1]=='?'&&str[l-2]!='b')str[l-1]='b';
    for(i=0;i<l-1;i++){
        if((str[i]=='a'&&str[i+1]=='a')||(str[i]=='b'&&str[i+1]=='b')||(str[i]=='c'&&str[i+1]=='c')){
            count++;
            break;}
    }
    for(i=1;i<l-1;i++){
        if(str[i]=='?'){
            if(str[i-1]=='a'&&str[i+1]!='b')
                str[i]='b';
            else if(str[i-1]=='a'&&str[i+1]!='c')
                str[i]='c';
            else if(str[i-1]=='b'&&str[i+1]!='a')
                str[i]='a';
            else if(str[i-1]=='b'&&str[i+1]!='c')
                str[i]='c';
            else if(str[i-1]=='c'&&str[i+1]!='a')
                str[i]='a';
            else if(str[i-1]=='c'&&str[i+1]!='b')
                str[i]='b';
        }
    }
    if(count==1){
        cout<<-1<<endl;
    }
    else{
        for(i=0;i<l;i++)
            cout<<str[i];
        cout<<endl;
    }
    }

    return 0;
}

