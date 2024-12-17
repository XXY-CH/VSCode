#include <iostream>
using namespace std;

long long func(int a, int b) {
	if (a == b) return a;
	else return func(a*2, b/2);
}

int main() {
	int s, p;
	cin >> s >> p;
	cout << func(s, p) << endl;
	return 0;
}
