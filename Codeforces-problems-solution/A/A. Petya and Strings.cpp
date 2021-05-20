#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    cin>>str2;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    for (int i=0; i<str.size(); i++){
        if(str2[i]>str[i]){
            cout<<"-"<<1<<endl;
            break;
        }
        else if(str[i]>str2[i]){
            cout<<1<<endl;
            break;
        }

    }
    if(str==str2)
        cout<<0<<endl;

    return 0;
}
