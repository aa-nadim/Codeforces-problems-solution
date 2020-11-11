#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
		for(int i=0;i<n;++i) {
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		long long x=v[0]*v[n-1];

		vector<long long>vv;
		for(ll i=2;i*i<=x;++i) {
			if(x%i==0){
				vv.push_back(i);
				if(i!=x/i)vv.push_back(x/i);
			}
		}
		sort(vv.begin(),vv.end());
		if(vv!=v)x=-1;

        cout<<x<<endl;

    }
    return 0;
}
