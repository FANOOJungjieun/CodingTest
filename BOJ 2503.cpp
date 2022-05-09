#include <iostream>
#include <string>
#include<cstring>
using namespace std;

bool answer[1000];
int number, strike, ball;

int count_ans = 0;

void solution() {
	string tmp_number = to_string(number);
	for (int i = 123; i < 1000; i++) {
		int now_strike = 0;
		int now_ball = 0;
		string now_number = to_string(i);

		for (int one = 0; one < 3; one++) {
			for (int two = 0; two < 3; two++) {
				if (one == two && now_number[one] == tmp_number[two]) now_strike++;
				if (one != two && now_number[one] == tmp_number[two]) now_ball++;
			}
		}

		if (strike != now_strike || ball != now_ball) answer[i] = false;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;
	
	memset(answer, true, sizeof(answer));

	for (int a = 123; a < 1000; a++) {
		string tmp = to_string(a);
		if (tmp[0] == tmp[1] || tmp[0] == tmp[2] || tmp[1] == tmp[2]) answer[a] = false;
		if (tmp[0] - '0' == 0 || tmp[1] - '0' == 0 || tmp[2] - '0' == 0) answer[a] = false;
	}

	for (int a = 0; a < t; a++) {
		cin >> number >> strike >> ball;
		solution();
	}

	for (int i = 123; i < 1000; i++) {
		if (answer[i]) count_ans++;
	}

	cout << count_ans << endl;


	return 0;
}
