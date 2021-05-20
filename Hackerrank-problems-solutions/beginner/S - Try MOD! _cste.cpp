#include <bits/stdc++.h>
using namespace std;

int number, mod;

int recur(int exp) {
    if (exp == 0)
    return 1;

    int v = recur(exp / 2);
    v = v*v;
    if (exp % 2 != 0)
    v = v*number;
    v = v%mod;
    return v;
}

int main() {
    int power;

    while(cin>>number>>power>>mod){
        number = number%mod;
        cout<<recur(power)<<endl;
    }

return 0;
}
