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

void rearrange(int arr[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i != j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    //ll test;cin>>test;while(test--)
        {
            int  n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            rearrange(arr, n);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;

        }
return 0;
}



