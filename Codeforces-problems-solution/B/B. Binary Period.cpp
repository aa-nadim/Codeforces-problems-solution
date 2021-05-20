///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test
    {
        string str;cin>>str;
        int l=str.length(),a,b;a=b=0;
        for(int i=0;i<l;i++){
            if(str[i]=='0') a++;
            else b++;
        }

        if(l<3) cout<<str<<endl;
        else if(a==0 || b==0) cout<<str<<endl;
        else{
            for(int i=0;i<l-1;i++){
                if(str[i]=='0' && str[i+1]=='0') cout<<str[i]<<"1";
                else if(str[i]=='1' && str[i+1]=='1') cout<<str[i]<<"0";
                else cout<<str[i];

            }
            cout<<str[l-1]<<endl;
        }



    }
    return 0;
}




