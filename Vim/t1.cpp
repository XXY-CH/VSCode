#include <iostream>
using namespace std;
auto main() -> int{
	int n;
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= i ; j++) {
			cout << "你个大聪明";
		}
		cout << endl;
	}
	return 0;
}
