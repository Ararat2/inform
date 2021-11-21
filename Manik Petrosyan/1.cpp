#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int X_vector_max_value;

    vector<int> X;
    vector<int> Y;

    // Get n
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    // Fill X
    for (int i = 0; i < n; i++) X.push_back(random(n));

    X_vector_max_value = X.front();

    // Get X max value
    for (int i: X) {
        if (i > X_vector_max_value) {
            X_vector_max_value = i;
        }
    }

    // Fill Y
    for (int i: X) {
        int item = i;

        if (item < 0) {
            item = item * -1;
        }

        if (item < X_vector_max_value) {
            Y.push_back(item);
        }
    }

    // Show Y data
    for (int i: Y) cout << i << ", ";

    return 0;
}