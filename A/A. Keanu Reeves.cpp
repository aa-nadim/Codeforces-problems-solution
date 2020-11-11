#include <bits/stdc++.h>

using namespace std;

int ln0[110];
int ln1[110];
int rn0[110];
int rn1[110];

int main()
{
	int n;
	string s;

	cin >> n;
	cin.ignore(4096,'\n');
	getline(cin,s);

	for(int i=0; i<n; ++i){
		ln0[i] = 0;
		ln1[i] = 0;
		rn0[i] = 0;
		rn1[i] = 0;
	}

	if(s[0] == '0')
		ln0[0] = 1;
	if(s[0] == '1')
		ln1[0] = 1;

	if(s[n-1] == '0')
		rn0[n-1] = 1;
	if(s[n-1] == '1')
		rn1[n-1] = 1;

	for(int i=1; i<n; ++i){
		char c = s[i];
		if(c == '0'){
			ln0[i] = ln0[i-1]+1;
			ln1[i] = ln1[i-1];
		}
		else if (c == '1'){
			ln1[i] = ln1[i-1]+1;
			ln0[i] = ln0[i-1];
		}
	}

	for(int i=n-2; i>=0; --i){
		char c = s[i];
		if(c == '0'){
			rn0[i] = rn0[i+1] + 1;
			rn1[i] = rn1[i+1];
		}
		else if (c == '1'){
			rn1[i] = rn1[i+1] + 1;
			rn0[i] = rn0[i+1];
		}
	}

	int count = 1;

	if(ln0[n-1] != ln1[n-1]){
		cout << count << "\n";
		cout << s << endl;
		count++;
	}

	if(count == 1){
		for(int i=0; i<n-1; ++i){
			if((ln0[i] != ln1[i]) and (rn0[i+1] != rn1[i+1])){
				count++;
				cout << count << "\n";

				for(int j=0; j<=i; ++j)
					cout << s[j];
				cout << " ";

				for(int j=i+1; j<n ; ++j)
					cout << s[j];

				cout << endl;
				break;
			}
		}
	}

	return 0;
}
