#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999

vector<int>v;
map<int,int>::iterator it;

int main()
{
    int t;cin>>t;while(t--){
        map<int,int>mp;
        string s,str="";cin>>s;
        str+='R';str+=s;str+='R';//cout<<str<<endl;
        int l=0,n=str.length(),mx=0;
        for(int i=0;i<n;i++){
            if(str[i]=='L')l++;
            if(str[i]=='R'){
                mx=max(mx,l);l=0;
            }
        }
        cout<<mx+1<<endl;

    }return 0;
}

