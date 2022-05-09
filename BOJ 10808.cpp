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
	int count[26] = { 0, };

	cin >> s;
	
	for (int i = 0; i < s.length(); i++) {
		int a = alpha.find(s[i]);
		count[a]++;
	}

	for (int i = 0; i < 26; i++) cout << count[i] << " ";

	return 0;
}
