//825 - Walking on the Safe Side (by Snail)
#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int N, w, n, i, j, i1;
	string s;
	cin >> N;
	while (N--){
		long long p[101][101] = {};
		cin >> w >> n >> ws;
		for (i=1; i<=w; i++) {
			getline(cin, s);
			stringstream ss(s);
			ss >> i1;
			while (ss >> j)
				p[i1][j] = -1;
		}

		//DP
		for(int i=1;i<w+1;i++)
			for(int j=1;j<n+1;j++)
				p[i][j]=p[i-1][j]+p[i][j-1];

		cout << p[w][n] << endl;
		if (N) cout << endl;
	}
}
