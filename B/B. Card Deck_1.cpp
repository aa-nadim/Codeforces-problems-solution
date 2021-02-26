#include<bits/stdc++.h>
#define N 100005
using namespace std;
int T,n,a[N],mx[N];
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i],mx[i]=max(mx[i-1],a[i]);
		int r=n;
		for(int i=n;i>=1;i--){
			if(mx[i]==a[i]){
				for(int j=i;j<=r;j++)cout<<a[j]<<" ";
				r=i-1;
			}
		}
		cout<<endl;
	}
	return 0;
}