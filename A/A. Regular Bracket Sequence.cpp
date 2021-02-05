///...............................GarbageValue..........................///
#include<bits/stdc++.h>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    REP(i,a,b)     for(int i = a; i <= b; i++)
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
#define    F              first
#define    S              second
#define    pb             push_back
#define    mp             make_pair
#define    pi             acos(-1)
#define    all(x)         x.begin(),x.end()
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {
                string s;cin>>s;
                if(s.length()%2==1)cout<<"NO"<<endl;
                else{
                    bool ok=true;int c=0,p=0;
                    for(int i=0;i<s.length();i++){
                        if(s[i]=='(') c++;
                        else if(s[i]==')') c--;
                        else p++;

                        if(c<0 && p<abs(c)){
                            ok=false;break;
                        }
                        else if(c<0)p--;
                    }
                    if(!ok) cout<<"NO"<<endl;
                    else{
                        int x=0,y=0;
                        for(int i=s.length()-1;i>=0;i--){
                            if(s[i]==')') x++;
                            else if(s[i]=='(') x--;
                            else y++;

                            if(x<0 && y<abs(x)){
                                ok=false;break;
                            }
                            else if(c<0)y--;
                        }
                        if(!ok) cout<<"NO"<<endl;
                        else cout<<"YES"<<endl;
                    }

                }
        }
return 0;
}


