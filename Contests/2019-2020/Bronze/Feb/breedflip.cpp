#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 105;

int n, cnt, flag = 1;
string a, b;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin >> n >> a >> b;
    for (int i = 0; i < n; ++i) {
        if ((a[i]!=b[i]) && flag) {
            ++cnt;
            flag = 0;
        }
        if (a[i]==b[i]) flag = 1;
    }
    cout << cnt << endl;
    return 0;
}