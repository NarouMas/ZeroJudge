#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t, n, i, f, p;
	cin >> t;
	while (t--) {
		int c[1001] = { 1 };
		cin >> n >> p;
		while (p--) {
			cin >> f;
			for (i = n; i >= f; i--)
				c[i] += c[i - f];
		}
		if (c[n])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}