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

    vector<int> X_vector_negatives;
    vector<int> X_vector_zeros;
    vector<int> X_vetor_positives;

    // Get n
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    // Fill X
    for (int i = 0; i < n; i++) X.push_back(random(n));

    // Filter X items
    for (int i: X) {
        if (i < 0) {
            X_vector_negatives.push_back(i);
            continue;
        }

        if (i == 0) {
            X_vector_zeros.push_back(i);
            continue;
        }

        X_vetor_positives.push_back(i);
    }

    // Fill Y
    for (int i: X_vector_negatives) Y.push_back(i);
    for (int i: X_vector_zeros) Y.push_back(i);
    for (int i: X_vetor_positives) Y.push_back(i);

    // Show Y data
    for (int i: Y) cout << i << ", ";

    return 0;
}