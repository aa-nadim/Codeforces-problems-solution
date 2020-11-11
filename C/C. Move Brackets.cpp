#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
const double pi=acos(-1.0);
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    test
    //while(1)
    {
        int n;cin>>n;
        string s;cin>>s;
        int a,b,c;a=b=c=0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                b++;
            }
            else{
                a++;
            }
            if(b>a){
                c++;a=0;b=0;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}


