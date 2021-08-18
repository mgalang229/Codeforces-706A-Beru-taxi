#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// input
	double a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	vector<double> x(n), y(n), v(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> v[i];
	}
	
	// calculate the distance between two points
	auto Distance = [](double x1, double y1, double x2, double y2) {
		return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	};
	
	// find the minimum time by dividing the distance with every speed
	double ans = DBL_MAX;
	for (int i = 0; i < n; i++) {
		ans = min(ans, Distance(a, b, x[i], y[i]) / v[i]);
	}
	cout << fixed << setprecision(20) << ans << '\n';
	return 0;
}
