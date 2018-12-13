//b231. TOI2009 第三題：書 by Snail
#include <iostream>
#include <algorithm>
using namespace std;

int m;

struct ary {
	int p[200];
}q[10000];

bool cmp(ary a, ary b) {
	for (int i = 0; i < m; i++) {
		if (a.p[i] != b.p[i])
			return a.p[i] < b.p[i];
	}
}

int main() {
	int n, i, j;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> q[i].p[j];
		}
	}
	sort(q, q + n, cmp);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << q[i].p[j] << ' ';
		}
		cout << endl;
	}
}