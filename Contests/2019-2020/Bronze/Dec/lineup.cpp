#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
typedef long long ll;
const int MAXN = 1005;

int n, flag;
vector<string> a = {"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};
string s[10][2], t1, t2, t3, t4;
bool solve(string cowa, string cowb) {
    int aa = find(a.begin(), a.end(), cowa) - a.begin();
    int bb = find(a.begin(), a.end(), cowb) - a.begin();
    return abs(aa-bb) != 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> s[i][0] >> t1 >> t2 >> t3 >> t4 >> s[i][1];
    sort(a.begin(), a.end());
    do {
        flag = 1;
        for (int i = 0; i < n; ++i) {
            if (solve(s[i][0], s[i][1]))
                flag = 0;
        }
        if (flag) break;
    } while (next_permutation(a.begin(), a.end()));
    for (string x : a)
        cout << x << endl;
    return 0;
}