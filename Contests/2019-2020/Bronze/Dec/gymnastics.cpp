#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
typedef long long ll;
const int MAXN = 1005;

int n, k, a[15][25], t, cnt;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    cin >> k >> n;
    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> t;
            a[i][t] = j;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = i+1; j <= n; ++j) {
            int c = 0;
            for (int l = 1; l <= k; ++l) {
                if (a[l][i] > a[l][j]) ++c;
            }
            if (c==0 || c==k) ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}