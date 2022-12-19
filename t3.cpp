#include <iostream>
using namespace std;

long long dfs(int step) {
	if (step <= 1) return 1;
	return dfs(step - 1) + dfs(step / 2);
}

auto main() -> int {
	int n;
	cin >> n;
	long long num = 1;
	for (int i = 1 ; i <= n ; i++) {
		num *= 2;
	}
	cout << dfs(n) << endl;
	cout << num << endl;
	return 0;
}
