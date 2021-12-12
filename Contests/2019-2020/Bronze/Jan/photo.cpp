#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 1005;

int b[MAXN], n, flag;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    
    cin >> n;
    for (int i = 1; i < n; ++i) cin >> b[i];
    for (int i = 1; i <= n; ++i) {
        vector<int> a(n);
        a[0] = i;
        flag = 1;
        for (int j = 1; j < n; ++j) {
            a[j] = b[j] - a[j-1];
            if (a[j]<1 || count(a.begin(), a.end(), a[j]) > 1) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            for (int i = 0; i < a.size(); ++i) {
                if (i) cout << " " << a[i];
                else cout << a[i];
            }
            break;
        }
    }
    return 0;
}