#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int count = 0;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		count++;
		if (i == s.size() - 1) {
			break;
		}
		if (s[i] == 'c') {
			if (s[i + 1] == '-' || s[i + 1] == '=') {
				i++;
			}
		}
		else if(s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				i+=2;
			}
			else if (s[i + 1] == '-') {
				i++;
			}
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') {

				i++;
			}
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				i++;
			}
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				i++;
			}
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				i++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
