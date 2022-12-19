#include <iostream>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
map <string, int> m;
int main() {
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        string s;
        cin >> s;
        string op;
        cin >> op;
        if (op == "enter") {
            m[s]++;
        }
        else if (op == "set") {
            int x;
            cin >> x;
            m[s] = x;
        }
        else if (op == "add") {
            int x;
            cin >> x;
            m[s] += x;
        }
        else if (op == "sub") {
            int x;
            cin >> x;
            m[s] -= x;
        }
        else if (op == "mul") {
            int x;
            cin >> x;
            m[s] *= x;
        }
        else if (op == "div") {
            int x;
            cin >> x;
            m[s] /= x;
        }
        else if (op == "mod") {
            int x;
            cin >> x;
            m[s] %= x;
        }
    }
    for (auto it = m.begin() ; it != m.end() ; it++)
        cout << it->first << " " << it->second << endl;
    cout << "Finish" << endl;
    return 0;
}