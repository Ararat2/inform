#include <iostream>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int indexes_sum = 0;

    // Get n
    do {
        cout << "Type n: ";
        cin >>  n;
    } while (n <= 0);

    int numbers[n][n];

    // Fill numbers array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            numbers[i][j] = random(n);
        }
    }

    int max_value = numbers[0][0];

    // Get max value and indexes sum
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                continue;
            };
            
            int item = numbers[i][j];

            indexes_sum += i + j;

            if (item > max_value) {
                max_value = item;
            }
        }
    }

    // Show result
    cout << "Result: " << indexes_sum * max_value << endl;

    return 0;
}