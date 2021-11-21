#include <iostream>
#include <vector>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int sum = 0;
    int result = 0;
    vector<int> items;

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

    // Get numbers
    for (int i = 0; i < n; i++) {
        bool is_odd = ((sum + i) % 2) == 0;

        if (is_odd) {
            items.push_back(numbers[i][i]);
            sum += i;
        }
    }

    // Get result
    for (int i: items) {
        if (result == 0) {
            result = i;
            continue;
        }

        result *= i;
    }

    // Show result
    cout << "Sum: " << result << endl;

    return 0;
}