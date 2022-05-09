#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc;
	
	cin >> tc;

	for (int t = 0; t < tc; t++) {
		string s;
		cin >> s;

		int len = s.length();
		int sum = 0;
		int nscore = 0;

		for (int i = 0; i < len; i++) {
			if (s[i] == 'X') {
				nscore = 0;
			}
			if (s[i] == 'O') {
				nscore++;
				sum += nscore;
			}
		}

		cout << sum << endl;

	}
	return 0;
}
