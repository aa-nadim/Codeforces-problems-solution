#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,j=0;
    string str;
    cin>>str;
    n=str.length();
    while(i<n){
        if(str[i]=='0'){j=i;break;}
        i++;}
    if(j==0){str.erase(str.begin()+1);
        cout<<str<<endl;}
    else{str.erase(str.begin()+i);
        cout<<str<<endl;}
    return 0;
}

