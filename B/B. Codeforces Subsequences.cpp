#include <bits/stdc++.h>
using namespace std;

string a = "codeforces";
pair<long long,string> dp[1605][1605];

int main() {
	dp[0][0] = {1,""};
	long long k;
	cin >> k;
	for(int len = 0; len < 1000; ++len) {
		for(int i = 0; i < (int) a.length(); ++i) {
			for(int c = 1; c <= 100; ++c) {
				if(dp[len][i].first * c >= dp[len+c][i+1].first) {
					dp[len+c][i+1].first = dp[len][i].first * c;
					dp[len+c][i+1].second = dp[len][i].second + string(c, a[i]);
				}
				// dp[len+c][i+1] = max(dp[len+c][i+1], dp[len][i] * c);
			}
		}
		if(dp[len][(int)a.length()].first >= k) {
			cout << dp[len][(int)a.length()].second << endl;
			return 0;
		}
	}

}
