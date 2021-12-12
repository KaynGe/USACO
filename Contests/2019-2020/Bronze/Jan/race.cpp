#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
typedef long long ll;
const int MAXN = 1005;

int k, n, t;

int solve(int lim) {
    int l = 0, r = 0, time = 0, dist = 0;
    for (int cur = 1; ; ++cur) {
        dist += cur;
        time++;
        if (dist >= k) return time;
        if (cur >= lim) {
            dist += cur;
            time++;
            if (dist >= k) return time;
        } 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    
    cin >> k >> n;
    while (n--) {
        cin >> t;
        cout << solve(t) << endl;
    }
    return 0;
}