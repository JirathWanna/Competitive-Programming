#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, ans = 0;
    cin >> n;
    unordered_map <int,float> umap;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        umap[input] ++;
    }

    // groups of 4 go first.
    ans += umap[4];
    umap[4] = 0;

    // 3 and 1 go together.
    if(umap[1] > 0 && umap[3] > 0) {
        if(umap[1] > umap[3]) {
            ans += umap[3];
            umap[1] -= umap[3];
            umap[3] = 0;
        } else {
            ans += umap[1];
            umap[3] -= umap[1];
            umap[1] = 0;
        }
    }

    // 2 and 2 go together.
    ans += floor((umap[2] / 2));
    if (umap[2] / 2 != floor(umap[2] / 2)) {
        umap[2] = 1;
    } else {
        umap[2] = 0;
    }

    // all groups left.
    if(umap[1] > 0) {
        ans += ceil((umap[1] + (2*umap[2]))/4);
    } else if (umap[3] > 0) {
        ans += (umap[3] + umap[2]);
    } else if (umap[2] > 0) {
        ans += umap[2];
    }

    cout << ans;
    
    
    
    
    
}