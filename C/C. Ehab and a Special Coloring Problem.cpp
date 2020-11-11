 #include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,x;cin>>n;
        if(n%2){
            for(int i=1;i<=n/2;i++){
                cout<<i<<" ";x=i;
            }
            for(int i=x;i>0;i--){
                cout<<i<<" ";
            }
            return 0;
        }
        else{
            for(int i=1;i<=n/2;i++){
                cout<<i<<" ";x=i;
            }
            for(int i=x-1;i>0;i--){
                cout<<i<<" ";
            }
            return 0;
        }


}

