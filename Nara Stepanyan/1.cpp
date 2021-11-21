#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
  int min = -max;

  return min + rand() % (( max + 1 ) - min);
}

int main() {
    vector<int> X;
    vector<int> Y;

    int n;
    int X_vector_max_value;

    // Get n
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    // Fill X
    for (int i = 0; i < n; i++) X.push_back(random(n));

    // Set X vector first item as the max value 
    X_vector_max_value = X.front();  

    // Get X vector max value
    for (int i: X) {
        if (i > X_vector_max_value) X_vector_max_value = i;
    };

    // Fill Y
    for (int i: X) Y.push_back(i + X_vector_max_value);

    // Show Y data
    for (int i: Y) cout << i << ", ";

    return 0;
}