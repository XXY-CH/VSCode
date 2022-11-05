#pragma G++ optimize("Ofast")
#pragma G++ optimize("inline")
#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;
stack<__int128_t> vc;

void read(__int128_t& x) { 
	x = 0;
	int f = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
		x = x * 10 + (c - '0'), c = getchar();
	x *= f;
}

void print(__int128_t x) {
    if (x < 0) putchar('-'), x = -x;
	if (x > 9) print(x / 10);
	putchar(x % 10 + '0');
}

int main() {
    __int128_t s = 1e18;
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    while (s > 0) {
        vc.push(s);
        s--;
    }
    while (!vc.empty()) {
        print(vc.top());
        vc.pop();
    }
    return 0;
}