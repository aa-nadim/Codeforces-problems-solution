#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
string str="0000000000";
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        int n;
        string s;cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                for(int j=0;j<=9;j++){
                    if(str[j]=='0'){
                        str[j]='1';break;
                    }
                }
            }
            else if(s[i]=='R'){
                for(int j=9;j>=0;j--){
                    if(str[j]=='0'){
                        str[j]='1';break;
                    }
                }
            }
            else{
                int x=s[i]-'0';//cout<<x<<endl;
                str[x]='0';
            }
        }
        cout<<str<<endl;return 0;
    }
    return 0;
}

