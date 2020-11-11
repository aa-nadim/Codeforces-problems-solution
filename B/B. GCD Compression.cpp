#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999

map<int,int>mp;
map<int,int>::iterator it;
int main()
{
    test{
                int n;cin>>n;
                vector<int>v[2];
                for(int i=1;i<=2*n;i++){
                    int x;cin>>x;
                    v[x%2].push_back(i);
                }
                int cnt=1;
                for(int i=0;i<2;i++){
                    for(int j=0;j+1<v[i].size();j+=2){
                        if(cnt<n){
                            cout<<v[i][j]<<" "<<v[i][j+1]<<endl;cnt++;
                        }
                    }
                }
    }return 0;
}

