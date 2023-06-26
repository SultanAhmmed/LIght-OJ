#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7
#define pi 2*acos(0.0)

using namespace std;

void solve() {

	ll tests;
	cin >> tests;
	for (ll i = 1; i <= tests; i++) {

		double radius;
		cin >> radius;

		double circle_Area = pi * radius * radius;
		double length = 2 * radius;
		double squre_Area = length * length;

		cout << "Case" << " " <<  i << ": " << squre_Area - circle_Area << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cout << fixed << setprecision(2);

	// int tests;
	// cin >> tests;
	// while (tests--) {
	solve();
	// }
}
