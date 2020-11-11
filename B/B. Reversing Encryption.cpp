#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;
map<int,int>mp;
int gcd(int a,int b){
    if(b==0)return a;
    return (b,a%b);
}
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int n;
	string s;
	cin >> n >> s;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			reverse(s.begin(), s.begin() + i);
		}
	}
	cout << s << endl;

	return 0;
}


