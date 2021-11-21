#include <iostream>
using namespace std;

int random(int max) {
    int min = -max;

    return min + rand() % (( max + 1 ) - min);
}

int main() {
    int n;
    int k;
    int gtk_count = 0;

    // Get n and k
    do {
        cout << "Type n: ";
        cin >> n;
    } while (n <= 0);

    cout << "Type k: ";
    cin >> k;

    int numbers[n][n];

    // Fill numbers array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) numbers[i][j] = random(n);
    }

    // Get items count
    for (int i = 0; i < n; i++) {
        int item = numbers[i][i];

        if (item < 0) item *= -1;

        if (item > k) gtk_count++;
    }

    // Show result
    cout << "Result: " << gtk_count << endl;

    return 0;
}