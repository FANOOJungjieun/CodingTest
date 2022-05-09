#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	cin >> s;
	
	int size = s.length();
	int p = 0;

	while (p < size) {
		for (int i = 0; i < 10; i++) {
			if (p + i >= size) break;
			cout << s[p+i];
		}
		cout << endl;
		p += 10;
	}

	return 0;
}
