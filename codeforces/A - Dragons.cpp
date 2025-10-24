#include <bits/stdc++.h>
using namespace std;


int main() {
    unordered_map <long long,long long> umap;

    long long s, n, x, y;
    cin >> s >> n;

    vector <long long> vec;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        umap[x] += y;

        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        if(i > 0 && (vec[i] == vec[i-1])) {
            
        } else if(s > vec[i]) {
            s+= umap[vec[i]];
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    


    
    
}