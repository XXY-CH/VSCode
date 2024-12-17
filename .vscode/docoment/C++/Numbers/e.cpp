#include <iostream>
using namespace std;
double e = 1.0;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    //cin >> n;
    n = 1000;
    for (int i = 1; i <= n; i++) {
        double fact = 1.0;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        e += 1.0 / fact;
    }
    cout << "e = " << e << endl;
    return 0;
}