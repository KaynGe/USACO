#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
typedef long long ll;
const int MAXN = 1005;

int n, k = 1, flag;
string s, a, b;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    cin >> n >> s;
    for (; k <= n; ++k) {
        flag = 1;
        for (int i = 0; i <= n - k; ++i) {
            a = s.substr(i, k);
            for (int j = 0; j < i; ++j) {
                b = s.substr(j, k);
                if (a == b) flag = 0;
            }
        }
        if (flag) {
            cout << k << endl;
            break;
        }
    }
    return 0;
}