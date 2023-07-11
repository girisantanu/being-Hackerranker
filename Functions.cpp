#include <iostream>
#include <cstdio>
using namespace std;
int main() {
int a;
int b;
int c;
int d;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
    if (a > b & a > c & a > d){
        cout << a;
    }
    if (b > a & b > c & b > d){
        cout << b;
    }
    if (c > a & c > b & c > d){
        cout << c;
    }
    if (d > a & d > b & d > c){
        cout << d;
    }
    return 0;
}
