// this program is not complete, you must complete it

#include <iostream>
using namespace std;

int main() {
    int N, val, sum = 0;
    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> val;
        sum += val;
    }

    cout << sum << endl;

    return 0;
}
