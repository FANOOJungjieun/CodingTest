#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int member[100001];
bool check[100001];
bool done[100001];
int n;
int tmp;

void dfs(int start) {
	check[start] = true;
	int now = member[start];

	if (!check[now]) dfs(now);
	else if (!done[now]) {
		for (int i = now; i != start; i = member[i]) {
			tmp++;
		}
		tmp++;
	}

	done[start] = true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int tc = 0; tc < t; tc++) {
		cin >> n;

		memset(check, 0, sizeof(check));
		memset(done, 0, sizeof(done));

		for (int i = 1; i <= n; i++) {
			cin >> member[i];
		}

		tmp = 0;

		for (int i = 1; i <= n; i++) {
			if(!check[i])
				dfs(i);
		}

		cout << n - tmp << endl;
	}

	return 0;
}
