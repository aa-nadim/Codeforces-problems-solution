#include <bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    int t;cin>>t;while(t--){
            int n,x;cin>>n>>x;

            int arr[n+1],m=0,c=0,s=0;
            for(int i=1;i<=n;i++){
                cin>>arr[i];s+=arr[i];
                if(arr[i]%x==0)c++;
                if(s%x!=0)m++;
            }
            if(c==n){
                cout<<-1<<endl;continue;
            }
            else if(m==n){
                cout<<n<<endl;continue;
            }
            else{
                c=0;s=0;
                for(int i=1;i<=n;i++){
                    s+=arr[i];
                    if(s%x){
                        c=max(c,i);
                        c=max(c,n-i);
                    }
                }
                cout<<c<<endl;
            }
    }
    return 0;
}
