#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //qiu pi
    double pi = 0;
    for (int i = 1; i < 100000000; i++) {
        pi += 1.0 / (i * i);
    }
    pi = pi * 6;
    pi = sqrt(pi);
    cout << pi << endl;
    return 0;
}
