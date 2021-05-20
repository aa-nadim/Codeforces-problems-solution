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
    int n;while(scanf("%d",&n)!=EOF){
        if(n==0)return 0;
        vector<int>v;v.push_back(0);v.push_back(1);
        for(int i=2;i<=n;i++){
            int x=i/2;
            if(i%2)v.push_back(v[x]+v[x+1]);
            else v.push_back(v[x]);
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
        v.clear();
    }
    return 0;
}

