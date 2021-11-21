#include <iostream>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int range[2];;
    int sum = 0;

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

    // Get range min value
    cout << "Type range min value: ";
    cin >> range[0];

    // Get range max value
    cout << "Type range max value: ";
    cin >> range[1];

    // Get sum
    for (int i = 0; i < n; i++) {
        int item = numbers[i][i];

        if (item >= range[0] && item <= range[1]) sum += item;
    }

    // Show result
    cout << "Sum: " << sum << endl;

    return 0;
}