#include <iostream>
#include <climits> // For INT_MIN

using namespace std;

int main() {
    int N, val;
    cin >> N; // Reading the number of integers in the list

    int maxVal = INT_MIN; // Initialize maxVal with the smallest possible integer value
    for (int i = 0; i < N; ++i) {
        cin >> val; // Read each integer in the list
        if (val > maxVal) {
            maxVal = val; // Update maxVal if the current integer is greater
        }
    }

    cout << maxVal << endl; // Output the largest integer found in the list
    return 0;
}
