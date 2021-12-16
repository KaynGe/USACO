#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 105;

int n, k, a1, a2, b1, b2, a[105], b[105];

int solve(int p) {
    int cur = p, loop = 0;
    while (1) {
        if (cur>=a1 && cur<=a2) cur = (a1+a2) - cur;
        if (cur>=b1 && cur<=b2) cur = (b1+b2) - cur;
        ++loop;
        if (cur == p) break;
    }
    for (int i = 0; i < k%loop; ++i) {
        if (cur>=a1 && cur<=a2) cur = (a1+a2) - cur;
        if (cur>=b1 && cur<=b2) cur = (b1+b2) - cur;
    }
    return cur;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);
    cin >> n >> k >> a1 >> a2 >> b1 >> b2;
    for (int i = 1; i <= 100; ++i) a[i] = i;
    for (int i = 1; i <= n; ++i) b[solve(i)] = i;
    for (int i = 1; i <= n; ++i) cout << b[i] << endl;
    return 0;
}