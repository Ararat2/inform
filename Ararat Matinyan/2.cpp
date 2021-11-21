#include <iostream>
#include <cmath>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int sum = 0;
    int result;

    // Get n
    do {
        cout << "Type n: ";
        cin >> n;
    } while (n <= 0);

    int numbers[n][n];

    // Fill numbers array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            numbers[i][j] = random(n);
        }
    }

    // Get sum
    for (int i = 0; i < n; i++) {
        int elem = numbers[i][i];

        if (elemt > 0) sum += pow(elem, 2);
    }

    // Calculate
    result = sqrt(sum / n);
    
    // Show calculating result
    cout << "Result: " << result << endl;

    return 0;
}