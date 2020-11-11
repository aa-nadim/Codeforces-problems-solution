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
        double x;
        string s1,s2;cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)cout<<"1.000000000000"<<endl;
        //cout<<endl<<s1<<"\t"<<s2<<endl;
        else{
            int q=0,po=0,po2=0,ne=0,ne2=0;
            for(int i=0;i<s1.length();i++){
                if(s1[i]=='+')po++;
                else ne++;
            }
            for(int i=0;i<s2.length();i++){
                if(s2[i]=='+')po2++;
                else if(s2[i]=='-')ne2++;
                else q++;
            }
            if(q==0 || ne<ne2 || po<po2)cout<<"0.000000000000"<<endl;
            else{
                x=pow(2,q);
                int y=q;
                if(s1[s1.length()-1]==s1[0])y=1;
                cout<<fixed<<setprecision(12)<<(double)y/x<<endl;
            }
        }
    }
    return 0;
}

