#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
int main()
{
    int n;cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    sort(s.begin(),s.end(),[&](const string &s, const string &t){
		return s.size()<t.size();
	});
    bool ok=true;
    for(int i=n-1;i>0;i--){
        if(strstr(s[i].c_str(),s[i-1].c_str()))continue;
        else{
            ok=false;break;
        }
    }
    if(!ok)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<s[i]<<endl;
    }
    return 0;
}
