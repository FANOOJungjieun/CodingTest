#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	int map[1001];

	for (int tc = 0; tc < t; tc++) {
		int n;
		cin >> n;

		float avg=0;
		int tmp;

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			avg += tmp;
			map[i] = tmp;
		}

		avg /= n;

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			if (map[i] > avg) {
				cnt++;
			}
		}

		float ans = ((float)cnt / (float)n)*100;

		cout << fixed;
		cout.precision(3);

		cout << ans << "%"<< endl;
	}

	return 0;
}
