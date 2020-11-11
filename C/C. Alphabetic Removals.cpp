#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;
map<int,int>mp;
int main()
{
    //test{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	ll n,k;cin>>n>>k;
	string str,st="",s="";cin>>str;st=str;
	if(n==k)return 0;
	else{
        sort(st.begin(),st.end());
        st.erase(0,k);
        char ch=st[0];
        int x=0;
        for(int i=0;i<st.length();i++){
            if(ch!=st[i])break;
            x++;
        }
        //cout<<ch<<endl;
        for(int i=n-1;i>=0;i--){
            if(str[i]>ch)s+=str[i];
            else if(str[i]==ch && x>0){
                s+=str[i];x--;
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        return 0;
	}




    //}return 0;
}

