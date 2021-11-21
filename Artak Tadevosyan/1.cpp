#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;

    vector<int> X;
    vector<int> Y;

    // Get n
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    // Fill X
    for (int i = 0; i < n; i++) X.push_back(random(n));

    // Fill Y
    for (int i = 0; i < X.size(); i++) {
        if (i % 2 == 0) Y.push_back(X[i]);
    }

    // Show Y data
    for (int i: Y) cout << i << ", ";

    return 0;
}