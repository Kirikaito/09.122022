#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> tasks;
    int n, li, ri, vi,endtime,volume = 0, flow=0, tick = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> li >> ri >> vi;
        tasks.insert(pair<int, int>(li, +vi));
        tasks.insert(pair<int, int>(ri, -vi));
    }
    cin >> endtime;
    auto end = tasks.lower_bound(endtime);
    for (auto it = tasks.begin(); it != end; ++it){
        volume += flow * (it->first-tick);
        if (volume < 0) volume = 0;
        tick = it->first;
        flow += it->second;
    }
    if (tick != endtime){
        volume += flow * (endtime - tick);
        if (volume < 0) volume = 0;
    }
    cout << volume;
    return 0;
}
