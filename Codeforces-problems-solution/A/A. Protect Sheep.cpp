//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi = acos(-1.0);
#define MX 999999
vector<int>g[MX];
bool v[MX];
map<int,int>L;
map<int,int>::iterator it;

int main()
{
    int row,col;cin>>row>>col;
    char ch[row+2][col+2];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>ch[i][j];
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            //if(ch[i][j]=='.' || ch[i][j]=='S')continue;
            if(ch[i][j]=='W' &&(ch[i-1][j]=='S' || ch[i][j-1]=='S' || ch[i][j+1]=='S' || ch[i+1][j]=='S')){
               cout<<"NO";return 0;
            }
            else if(ch[i][j]!='W' && ch[i][j]!='S'){
                ch[i][j]='D';
            }

        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<ch[i][j];
        }cout<<endl;
    }
}

