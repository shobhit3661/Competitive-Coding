#include <bits/stdc++.h>
using namespace std;
 
const int N = 1000 * 200 + 5;
int n, t, mx;
map <int, int> mp;
 
int main() {
	cin >> t;
	while (t--) {
		mx = 0, mp.clear();
		cin >> n;
		for (int i = 0, j; i < n; i++) {
			cin >> j;
			mx = max(mx, ++mp[j]);
		}
		cout << max((n % 2), mx - (n - mx)) << '\n';
	}
}
