#include <bits/stdc++.h>
using namespace std;
int n,k,i,j,x,g,c[6000];
pair<int,int> a[6000];
int main(){
	for(cin>>n>>k,i=1;i<=n;i++)cin>>x,a[i]={x,i};

	sort(a+1,a+n+1);
	for(i=j=1;i<=n;i++,j>k?j=1:0){
		c[a[i].second]=j++;
		if(a[i].first==a[i-1].first){
			if(++g>k)return cout<<"NO",0;
		}
		else g=1;
	}
	cout<<"YES"<<endl;
	for(i=1;i<=n;i++)cout<<c[i]<<" ";
}
