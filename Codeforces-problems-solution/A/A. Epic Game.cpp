///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main(){

	int a,b,n;
	cin>>a>>b>>n;

	for(int i=1;;i++){
		int x;
		if(i%2==1){
			x= __gcd(a,n);
		}
		else{
			x= __gcd(b,n);
		}
		n-=x;
		if(n<0){
			cout<<i%2;
			return 0;
		}
	}


}///...........Alhamdulillah.........///
