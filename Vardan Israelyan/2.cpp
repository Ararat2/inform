#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    
    // Get n
    do {
        cout << "Type n: ";
        cin >> n;
    } while (n <= 0);

    int numbers[n][n];
    int max = numbers[0][0];

    // Fill numbers array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) numbers[i][j] = random(n);
    }

    // Get max value
    for (int i = 0; i < n; i++) {
        int item = numbers[i][i];

        if (item > max) max = item;
    }

    // Show result
    cout << "Max: " << max << endl;

    return 0;
}