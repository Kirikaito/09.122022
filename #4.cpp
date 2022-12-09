#include <bits/stdc++.h>

using namespace std;

int main() {
    int answ = 0,c = 0;
    string osn,part;
    vector <string> combs;
    char st;
    cin >> osn >> part;
    combs.insert(combs.end(),part);
    for(int i = 0;i < part.size();i++){
        st = part[0];
        for(int e = 1; e <part.size();e++){
                part[e - 1] = part[e];
            }
        part[part.size() - 1] = st;
        combs.insert(combs.end(),part);
    }
    for(int i = 0;i < osn.size();i++){
        for(int j = 0;j < combs.size();j++){
            for(int e = 0; e < part.size();e++){
                if(osn[i + e] == combs[j][e]){
                    c++;
                }
            }
            if(c == part.size()){
                answ++;
                c = 0;
                break;
            }
            c = 0;
        }
    }
    cout << answ;
}
