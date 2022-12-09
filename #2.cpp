#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,in,c = 1,max = 1,num;
    vector <int> list, dup;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> in;
        list.push_back(in);
        dup.push_back(in);
    }
    sort(dup.begin(),dup.end());

    num = dup[0];
    for(int i = 1; i < n; i++){
        if(dup[i] == dup[i - 1]){
            c++;
        }else{
            c = 1;
        }
        if(c > max){
            max = c;
            num = dup[i];
        }
    }
    for(int i = 0; i < max; i++){
        list.erase(find(list.begin(),list.end(),num));
    }
    cout << endl;
    for(auto i : list) cout << i <<' ';
    for(int i = 0; i < max;i++) cout << num << ' ';
}
