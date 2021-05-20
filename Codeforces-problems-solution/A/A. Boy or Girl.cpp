#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1])
            count++;
    }
    if((str.size()-count)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
