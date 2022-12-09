#include <bits/stdc++.h>

using namespace std;

int main() {
    int get = 0,tax = 0,in;
    cin >> in;
    while(in >= 107){
        get += 100;
        tax +=7;
        in -= 107;
    }
    if(in > 7){
        tax += 7;
        get += in - 7;
    }
    cout << get << ' ' << tax;
}
