#include <iostream>
using namespace std;

string add (string &s1, string &s2,string &s3){
    int carry=0,sum,i;

    string  min=s1,
     max=s2,
     result = "";

    // Finds the bigger string
    if (s1.length()>s2.length() && s1.length()>s3.length()){
        max = s1;
        if(s2.length()>s3.length())
            min = s3;
        else
            min = s2;
    }
    else if(s2.length()>s1.length() && s2.length()>s3.length()) {
        max = s2;
        if(s1.length()>s3.length())
            min = s3;
        else
            min = s1;
    }
    else if (s3.length()>s1.length() && s3.length()>s3.length()){

        max = s3;
        if(s1.length()>s2.length())
            min = s2;
        else
            min = s1;

    }
}

// Fills the result for overlapping regions of sum
for (i = min.length()-1; i>=0; i--){
     sum = min[i] + max[i + max.length() - min.length()] + carry - 2*'0';

     carry = sum/10;
     sum %=10;

     result = (char)(sum + '0') + result;
}

// Summates the previous carry and the remaining digits of bigger string
i = max.length() - min.length()-1;

while (i>=0){
     sum = max[i] + carry - '0';
     carry = sum/10;
     sum%=10;

     result = (char)(sum + '0') + result;
     i--;
}

// Adds the carry if remaining to the last digit e.g 999+1=1000
if (carry!=0){
   result = (char)(carry + '0') + result;
}

return result;
}

int main (){
// implementation
    string a,b,c;
    cin >> a >> b >>c;
    cout << add (a,b,c)<<endl;
    return 0;
}
