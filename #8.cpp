#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,answ = 0;
    cin >> n;
    if(n >= 4) answ += 1;
    for(;n > 1;n--){
        answ++;
    }
    cout << answ;
}
