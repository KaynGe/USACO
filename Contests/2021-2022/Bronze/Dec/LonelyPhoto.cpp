#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 2000005;

ll n, l, r, cnt;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
	for (int i = 0; i < n; ++i) {
		l = 0;
		if (i>0 && s[i]!=s[i-1]) {
			l++;
			for (int j=i-2; j>=0 && s[j]!=s[i]; --j)
				l++;
		}
		r = 0;
		if (i<n-1 && s[i]!=s[i+1]) {
			r++;
			for (int j=i+2; j<n && s[j]!=s[i]; ++j)
				r++;
		}
		cnt += l*r + max(l-1, ll(0)) + max(r-1, ll(0));
	}
	cout << cnt << endl;
    return 0;
}