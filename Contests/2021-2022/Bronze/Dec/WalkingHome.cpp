#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 55;

char a[MAXN][MAXN];
int t, n, k, cnt;

void solve() {
	cin >> n >> k;
	cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	if (k >= 1) {
		int rd = 1, dr = 1;
		for (int i = 0; i < n; ++i) {
			if (a[0][i]=='H' || a[i][n-1]=='H') rd=0;
			if (a[i][0]=='H' || a[n-1][i]=='H') dr=0;
		}
		cnt += rd + dr;
	}
	if (k >= 2) {
		// rdr j->col
		for (int j = 1; j < n-1; ++j) {
			int rdr = 1;
			for (int i = 0; i < n; ++i) {
				if (a[i][j]=='H') rdr=0;
				if (i<j && a[0][i]=='H') rdr=0;
				if (i>j && a[n-1][i]=='H') rdr=0;
			}
			cnt += rdr;
		}
		// drd i->row
		for (int i = 1; i < n-1; ++i) {
			int drd = 1;
			for (int j = 0; j < n; ++j) {
				if (a[i][j]=='H') drd=0;
				if (j<i && a[j][0]=='H') drd=0;
				if (j>i && a[j][n-1]=='H') drd=0;
			}
			cnt += drd;
		}
	}
	if (k >= 3) {
		for (int i = 1; i < n-1; ++i) {
			for (int j = 1; j < n-1; ++j) {
				// rdrd
				if (a[i][j]=='H') continue;
				int rdrd = 1;
				for (int l = 0; l < n; ++l) {
					if (l<=j && a[0][l]=='H') rdrd=0;
					if (l<=i && a[l][j]=='H') rdrd=0;
					if (l>=j && a[i][l]=='H') rdrd=0;
					if (l>=i && a[l][n-1]=='H') rdrd=0;
				}
				cnt += rdrd;
				// drdr
				int drdr = 1;
				for (int l = 0; l < n; ++l) {
					if (l<=i && a[l][0]=='H') drdr=0;
					if (l<=j && a[i][l]=='H') drdr=0;
					if (l>=i && a[l][j]=='H') drdr=0;
					if (l>=j && a[n-1][l]=='H') drdr=0;
				}
				cnt += drdr;
			}
		}
	}
	cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}