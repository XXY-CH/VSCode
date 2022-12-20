#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
string str;
void turn_small(){
	long long SIZE = str.size();
	for(int i = 0 ; i < SIZE ; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}
}

long long dfs(int step) {
	if (step <= 1) return 1;
	return dfs(step - 1) + dfs(step / 2);
}

long long pow2(int nu) {
	int num = 1;
	for (int i = 1 ; i <= nu ; i++) {
		num *= 2;
	}
	return num;
}

auto main() -> int {
	cin >> str;
	turn_small();
	while (str != "exit") {
		if (str == "pow2") {
			int nu;
			cin >> nu;
			cout << pow2(nu) << endl;
		}
		else if (str == "dfs") {
			int n;
			cin >> n;
			cout << dfs(n) << endl;
		}
		cin >> str;
		turn_small();
	}
	cout << "Bye" << endl;
	return 0;
}
