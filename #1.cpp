#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k = 0;
    double c,d;
    vector<int> prime_n, prime_m;
    cin >> n >> m;
    c = n;
    d = m;
    while(c > 1){
        for(double i = 2; i <= (c);i++){
            for(double e = 2; e <= i/2;e++){
                if((int)(i/e) == i/e){
                    k++;
                    break;
                }
            }
            if(k != 0){
                k = 0;
                continue;
            }
            while((int)(c/i) == c/i){
                prime_n.push_back(i);
                c = c/i;
            }
        }
    }
    k = 0;
    while(d > 1){
        for(double i = 2; i <= (d);i++){
            for(double e = 2; e < i/2;e++){
                if((int)(i/e) == i/e){
                    k++;
                    break;
                }
            }
            if(k != 0){
                k = 0;
                continue;
            }
            while((int)(d/i) == d/i){
                prime_m.push_back(i);
                d = d/i;
            }
        }
    }

    for(int i = 0; i < prime_n.size(); i++){
        for(int e = 0; e < prime_m.size(); e++){
            if(prime_n[i] == prime_m[e]){
                prime_n.erase(prime_n.begin() + i);
                prime_m.erase(prime_m.begin() + e);
                i--;
                e--;
            }
        }
    }

    cout << prime_m.size() + prime_n.size();
}
