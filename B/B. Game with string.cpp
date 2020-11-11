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
    //test
    //while(1)
    {
        string s;cin>>s;
        stack<char>st;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(st.size()>0 && s[i]==st.top()){
                c++;
                st.pop();
            }
            else st.push(s[i]);
        }
        if(c%2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

