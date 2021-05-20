///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
using namespace std;
int main(){
        double a=3.1416, b=3.50000, c=3.70000;
        double x=-3.1416, y=-3.50000, z=-3.70000;

            ///floor()///
        cout<<floor(a)<<endl;
        cout<<floor(b)<<endl;
        cout<<floor(c)<<endl;

        cout<<floor(x)<<endl;
        cout<<floor(y)<<endl;
        cout<<floor(z)<<endl;


            ///ceil()///
        cout << ceil(a) << endl;
        cout << ceil(b) << endl;
        cout << ceil(c) << endl;

        cout << ceil(x) << endl;
        cout << ceil(y) << endl;
        cout << ceil(z) << endl;

            ///trunc()///
        cout << trunc(a) <<endl;
        cout << trunc(b) <<endl;
        cout << trunc(c) <<endl;

        cout << trunc(x) << endl;
        cout << trunc(y) << endl;
        cout << trunc(z) <<endl;

             ///round()///
        cout << round(a) << endl;
        cout << round(b) << endl;
        cout << round(c) << endl;

        cout << round(x) << endl;
        cout << round(y) << endl;
        cout << round(z) << endl;

            ///setprecision()///
        double num = 3.1416, num2 = -3.1416;
        cout << fixed << setprecision(0) << num <<" "<< num2 <<endl;
        cout << fixed << setprecision(1) << num <<" "<< num2 <<endl;
        cout << fixed << setprecision(2) << num <<" "<< num2 <<endl;
        cout << fixed << setprecision(3) << num <<" "<< num2 <<endl;
        cout << fixed << setprecision(4) << num <<" "<< num2 <<endl;
        cout << fixed << setprecision(5) << num <<" "<< num2 <<endl;


        return 0;
}
