#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 105;

int a[MAXN][2], n, area, h, w;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i][0] >> a[i][1];
    for (int i = 0; i < n; ++i) {
        h = 0; w = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i][0]==a[j][0]) h = max(h, abs(a[i][1]-a[j][1]));
            if (a[i][1]==a[j][1]) w = max(w, abs(a[i][0]-a[j][0]));
            area = max(area, w * h);
        }
    }
    cout << area << endl;
    return 0;
}