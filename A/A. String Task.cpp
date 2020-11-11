#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]!='a' && str[i]!='o' && str[i]!='e' && str[i]!='u' && str[i]!='i' && str[i]!='A' && str[i]!='O' && str[i]!='E' && str[i]!='U' && str[i]!='I' && str[i]!='y'&&str[i]!='Y'){
            if(str[i]<='Z')
                str[i]=str[i]+32;
            cout<<"."<<str[i];
        }
    }
    cout<<endl;


    return 0;
}
