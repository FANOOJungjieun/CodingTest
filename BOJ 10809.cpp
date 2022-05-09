#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	string alpha = "abcdefghijklmnopqrstuvwxyz";

	cin >> s;

	for (int i = 0; i < 26; i++) {
		cout << (int)s.find(alpha[i]) << " ";
	}

	return 0;
}
