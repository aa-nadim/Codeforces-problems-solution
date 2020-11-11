#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
        int n,k,d,c=0;cin>>n>>k;d=k;
        for(int i=0;i<n;i++){
            char ch;cin>>ch;
            if(ch=='0')d++;
            else{
                d-=k;c+=d/(k+1);d=0;
            }
        }
        cout<<c+d/(k+1)<<endl;
    }return 0;
}



