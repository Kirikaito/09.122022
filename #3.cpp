#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int x = 1; ; x++) {
        int d = x,f = 0;
        for (; d > 0; f++){
            if (f > n) break;
            int t = d;
            if (t % n != k) break;
            d -= d / n;
            d-= k;
        }
        if (f == n) {
            cout << x;
            break;
        }
    }
}
