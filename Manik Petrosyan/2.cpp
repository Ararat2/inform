#include <iostream>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int zeros_count = 0;

    // Get n
    do {
        cout << "Type n: ";
        cin >> n;
    } while (n <= 0);

    int numbers[n][n];

    // Fill numbers array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) numbers[i][j] = random(n);
    }

    // Get zeros count
    for (int i = 0; i < n; i++) {
        if (numbers[i][i] == 0) zeros_count++;
    }

    // Show result
    cout << "Zeros count: " << zeros_count << endl;

    return 0;
}