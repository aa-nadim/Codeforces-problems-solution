#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    string str;
    cin>>str;
    l=str.size();
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i]!='+'){
            cout<<str[i];
            if(i<l-1)
                cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}
