#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int k;

    vector<int> X;
    vector<int> Y;

    // Get n and k
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    cout << "Type k: ";
    cin >>  k;

    // Fill X
    for (int i = 0; i < n; i++) X.push_back(random(n));

    // Fill Y
    for (int i: X) {
        if (i % k == 0) Y.push_back(i);
    }

    // Show Y data
    for (int i: Y) cout << i << ", ";

    cout << endl;

    return 0;
}