#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,in;
    vector<int> list;
    cin >> n;
    while(n > 0){
        cin >> in;
        list.push_back(in);
        n--;
    }
    sort(list.begin(),list.end());
    for(auto i : list) cout << i << ' ';
}
