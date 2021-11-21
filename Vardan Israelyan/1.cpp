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

    // Fill y
    for (int i: X) {
        int i_count = 0;

        for (int j: X) {
            if (j == i) i_count++;

            if (i_count > 1) break;
        }

        if (i_count > 1) Y.push_back(i);
    }

    // Show Y data
    for (int i: Y) cout << i << ", ";

    return 0;
}