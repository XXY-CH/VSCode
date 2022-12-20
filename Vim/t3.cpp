#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <time.h>
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
		else if (str == "dist") {
			double x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			double num = sqrt((abs(x1-x2))*(abs(x1-x2))+abs(y1-y2)*abs(y1-y2));
			long long l = (abs(x1-x2))*(abs(x1-x2))+abs(y1-y2)*abs(y1-y2);
			cout << "sqrt:" << l << ',' << num << endl;
		} 
		else if (str == "chrt") {
			double l[4];
			for(int i = 1 ; i <= 3 ; i++) {
				cin >> l[i];
			}
			sort(l + 1, l + 3 + 1);
			cout << (l[1]*l[1]+l[2]*l[2]==l[3]*l[3]) << endl;
		}
		else if (str == "time") {
			time_t now = time(0);
			char* dt = ctime(&now);
			cout << "本地日期和时间：" << dt << endl;
			tm *gmtm = gmtime(&now);
			dt = asctime(gmtm);
			cout << "UTC 日期和时间："<< dt << endl;
		}
		cin >> str;
		turn_small();
	}
	cout << "Bye" << endl;
	return 0;
}
