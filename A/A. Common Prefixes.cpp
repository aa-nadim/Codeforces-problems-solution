#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
string str="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    test
    //while(1)
    {
        string s1=str,s;
        int n;cin>>n;
        int a[n];
        string str2[n+1];
        for(int i=0;i<n;i++)cin>>a[i];
        int x=*max_element(a,a+n);
        //if(x!=0)s1.erase(s1.begin()+x,s1.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            s=s1;
            if(a[0]==0 || x==0){reverse(s1.begin(),s1.end());cout<<s1<<endl;}
            else{
                if(cnt!=1){s[a[i]]=str[i];cnt=0;}
                cout<<s<<endl;
                s.clear();
                if(a[i]==x)cnt++;
            }
        }
        if(x==0){reverse(s1.begin(),s1.end());cout<<s1<<endl;}

        else{s=s1;s[a[n-1]]=str[n-1];cout<<s<<endl;}
    }
    return 0;
}

