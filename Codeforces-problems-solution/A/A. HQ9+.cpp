#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    bool flag=false;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            flag=true;
            break;
        }
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
