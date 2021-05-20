#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    test
    //while(1)
    {
        string str,s="";cin>>str;
        sort(str.begin(),str.end());
        char ch=str[0];
        s+=ch;
        int n=str.length();
        n--;
        while(n--){
            ch++;
            s+=ch;
        }
        if(s==str)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

