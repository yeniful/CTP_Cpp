#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = N - i; j > 0; j--)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
