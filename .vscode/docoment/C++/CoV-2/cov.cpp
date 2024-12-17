#include <iostream>
using namespace std;

int people[100010];
int mun[100010];

int main() {
    int x;
    cin >> x;
    for (int i = 1 + 7 ; i <= x + 7 ; i++) {
        if (i <= 1 + 7) {
            people[i] = 1;
            mun[i] = 0;
        }
        else {
            people[i] = (people[i - 1] - people[i - 2]) * 4 + people[i - 1] - mun[i - 1];
            mun[i] = people[i - 1] - people[i - 2];
        }
    }
    for (int i = 1 + 7 ; i <= x + 7 ; i++) {
        cout << people[i] << " ";
    }
    cout << endl;
    return 0;
}