#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 105;

int n, k, cnt;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    cin >> n >> k >> s;
    cout << s;
    cnt = s.size();
    while (--n) {
        cin >> s;
        if (cnt + s.size() <= k) {
            cout << " " << s;
            cnt += s.size();
        } else {
            cout << "\n" << s;
            cnt = s.size();
        }
    }
    return 0;
}