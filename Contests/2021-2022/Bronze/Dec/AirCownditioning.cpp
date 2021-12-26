#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 100005;

int n, p[MAXN], t[MAXN], d[MAXN], cnt;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> n;
    for (int i = 1; i <= n; ++i) cin >> p[i];
	for (int i = 1; i <= n; ++i) {
		cin >> t[i];
		d[i] = p[i] - t[i];
	}
	for (int i = 0; i <= n; ++i) {
		cnt += abs(d[i]-d[i+1]);
	}
	cout << cnt / 2 << endl;
    return 0;
}